string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> p(numRows,"");
        int size=2*numRows-2;
        for(int i=0;i<s.size();i++) p[abs(numRows-1-i%size)]+=s[i];
        return accumulate( p.rbegin(), p.rend(), string("") );
    }
