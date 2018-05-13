class Solution:
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        from collections import Counter
        _s = Counter(s)
        _t = Counter(t)
        if _s == _t:
            return True
        else:
            return False