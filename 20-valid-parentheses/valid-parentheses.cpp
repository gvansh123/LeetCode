class Solution {
    bool solve(string &str)
    {
        stack<char> s;
        for(int i=0;i<str.length();i++)
        {
            char c=str[i];
            if(c=='['||c=='{'||c=='(')
            {
                s.push(c);
            }
            else
            {
                if(!s.empty())
                {
                    char t=s.top();
                    if((c=='}'&&t=='{')||(c==']'&&t=='[')||(c==')'&&t=='('))
                    {
                        s.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                return false;
            }
        }
        if(s.empty())
        return true;
        else
        return false;
    }
public:
    bool isValid(string s) {
        return solve(s);
    }
};