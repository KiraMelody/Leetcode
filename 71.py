class Solution:
    def simplifyPath(self, path):
        """
        :type path: str
        :rtype: str
        """
        path = path.split('/')
        l = []
        for e in path:
            if e == "" or e == ".":
                continue
            if e == "..":
                l = l[:-1]
            else:
                l.append(e)
        ans = ""
        for i in l:
            ans += "/" + i
        if ans == "":
            return "/"
        return ans