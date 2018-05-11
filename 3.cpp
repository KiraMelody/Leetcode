class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[500];
        int last = 1;
        int ans = 1;
        if (s.size() == 0)
            return 0;
        memset(hash, -1, sizeof(hash));
        hash[s[0]] = 0;
        for (int i = 1;i < s.length(); i++)
        {
            int d = 1;
            if(hash[s[i]] == -1)
            {
                d = last + 1;
            } else
            {
                d = min(last + 1, i - hash[s[i]]);
            }
            hash[s[i]] = i;
            if (d > ans) ans = d;
            last = d;
        }
        return ans;
    }
};