class Solution {
public:
    int zi(char c)
    {
        switch(c)
        {
            case '(':return 1;
            case ')':return -1;
            case '[':return 2;
            case ']':return -2;
            case '{':return 3;
            case '}':return -3;
            default:return 0;
        }
    }
    bool chk(char c1, char c2)
    {
        if (c1 == '(' && c2 == ')')
        {
            return true;
        }
        if (c1 == '[' && c2 == ']')
        {
            return true;
        }
        if (c1 == '{' && c2 == '}')
        {
            return true;
        }
        return false;
    }
    bool isValid(string s) {
        stack<char> q;
        for(auto i: s)
        {
            // cout<<q.size()<<endl;
            if(!q.empty())
            {
                char l = q.top();
                // cout<<l<<i<<endl;
                if (!chk(l, i))
                {
                    if (zi(l) * zi(i) < 0)
                    {
                        return false;
                    }
                    q.push(i);
                }
                else
                {
                    q.pop();
                }
            }
            else
            {
                q.push(i);
            }
        }
        if (q.empty())
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};