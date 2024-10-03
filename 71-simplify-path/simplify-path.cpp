class Solution {
public:
    string simplifyPath(string path) {
        string ans="";
        stack<string> s;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='/')
            continue;

            string temp="";
            while(i<path.size()&&path[i]!='/')
            temp+=path[i++];

            if(temp=="."||temp=="")
            continue;
            else if(temp=="..")
            {
                if(!s.empty())
                s.pop();
            }
            else
            s.push(temp);
        }
        while(!s.empty()){
        ans="/"+s.top()+ans;
        s.pop();
        }
        if(ans=="")
        return "/";
        return ans;
    }
};