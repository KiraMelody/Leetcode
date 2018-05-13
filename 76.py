class Solution:
    def minWindow(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        if len(s) == 0:
            return "";
        ans = ""
        dic = {}
        from collections import Counter
        _t = Counter(t)
        n = len(_t)
        l = 0
        for i, e in enumerate(s):
            if e in _t:
                _t[e] -= 1
                if _t[e] == 0:
                    n -= 1
            while l <= i and n == 0:
                if ans == '' or len(ans) > i - l + 1:
                    ans = s[l: i+1]
                if s[l] in _t:
                    if _t[s[l]] == 0:
                        n += 1
                    _t[s[l]] += 1
                l += 1
        return ans
                