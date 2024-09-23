class Solution {
    bool open(char c)
    {
        return c=='('||c=='{'||c=='[';
    }
public:
    bool isValid(string str) {
       stack<int> s;
       for(auto i:str)
       {
        if(open(i))
        {
            s.push(i);
        }
        else
        {
            if(s.empty()==true)
                return false;
            if((i==')'&&s.top()=='(')||(i=='}'&&s.top()=='{')||(i==']'&&s.top()=='['))
            s.pop();
            else
            return false;
        }
       }
       return s.empty();

    }
};