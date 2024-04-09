class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n=a.size();
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0||s.empty())
            {
                s.push(a[i]);
            }
            else
            {
                while(!s.empty()&&s.top()>0&&s.top()<abs(a[i]))
                {
                    s.pop();
                }
                if(!s.empty()&&s.top()==-1*a[i])
                {
                    s.pop();
                }
                else
                {
                    if(s.empty()||s.top()<0)
                    s.push(a[i]);
                }
            }
        }
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};