class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.size() == 0)
            return 0;
        int d[30];
        memset(d, 0, sizeof(d));
        int ans = 1;
        int length = 0;
        int dmax = 0, dloc = -1;
        for(int i = 0; i < s.size(); i++)
        {
            d[s[i] - 'A'] += 1;
            length += 1;
            if (d[s[i] - 'A'] > dmax)
            {
                dmax = d[s[i] - 'A'];
                dloc = s[i] - 'A';
            }
            while(length - dmax > k)
            {
                d[s[i - length + 1] - 'A'] -= 1;
                length -= 1;
                if (dloc == s[i - length + 1] - 'A')
                {
                    for(int j = 0; j < 26; j ++)
                        if (d[j] > dmax)
                        {
                            dmax = d[j];
                            dloc = j;
                        }
                }
            }
            if (length > ans)
                ans = length;
        }
        return ans;
    }
};