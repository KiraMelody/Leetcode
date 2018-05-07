class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m == 0)
            return vector<int>();
        int n = matrix[0].size();
        int l, r, h, d;
        int dic[][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        l = 0, r = n - 1, h = 0, d = m - 1;
        vector<int>ans = vector<int>();
        int x = 0, y = 0;
        int c = 0;
        while(l <= r && h <= d)
        {
            while(x >= h && x <= d && y >= l && y <= r)
            {
                ans.push_back(matrix[x][y]);
                x += dic[c][0];
                y += dic[c][1];
                // cout << x << " "<< y<<endl;
            }
            x -= dic[c][0];
            y -= dic[c][1];
            // cout << x << " "<< y<<endl;
            switch(c)
            {
                case 0: h++;c=1;break;
                case 1: r--;c=2;break;
                case 2: d--;c=3;break;
                case 3: l++;c=0;break;
            }
            x += dic[c][0];
            y += dic[c][1];
            // cout << x << " "<< y<<endl;
            // cout << l << r << h << d <<endl;
        }
        return ans;
    }
};