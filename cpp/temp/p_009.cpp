class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        else {
            int l = 0;
            while (x/int(pow(10, l)) >= 10) {
                l++;
            }
            for (int i = l; i > l / 2; i--) {
                int a = x/int(pow(10, i))%10;
                int b = x%int(pow(10, (l-i+1)))/(pow(10, (l-i)));
                if (a != b) {
                    return false;
                }
            }
            return true;
        }
    }
};
