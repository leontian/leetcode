ass Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        ransomDict = {}
        magazineDict = {}
        for c in ransomNote:
            if c in ransomDict:
                ransomDict[c] += 1;
            else:
                ransomDict[c] = 1;
        for c in magazine:
            if c in magazineDict:
                magazineDict[c] += 1;
            else:
                magazineDict[c] = 1;
        for c in ransomDict:
            if c not in magazineDict or ransomDict[c] > magazineDict[c]:
                return False
        return True;
