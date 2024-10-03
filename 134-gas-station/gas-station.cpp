class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg=0,tc=0;
        for(int i=0;i<gas.size();i++)
        {
            tg+=gas[i];
            tc+=cost[i];
        }
        if(tg<tc)
        {
            return -1;
        }

        int ans=0;
        int curr=0;
        for(int i=0;i<gas.size();i++)
        {
            curr+=gas[i]-cost[i];
            if(curr<0)
            {
                curr=0;
                ans=i+1;
            }
        }
        return ans;
    }
};