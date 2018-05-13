class Solution:
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        l = []
        for str in strs:
            _str = sorted(str)
            l.append((_str, str))
        l.sort()
        ans = [[l[0][1]]]
        n = 0
        for i in range(1, len(strs)):
            if l[i][0] == l[i-1][0]:
                ans[n].append(l[i][1])
            else:
                n += 1
                ans.append([l[i][1]])
        return ans