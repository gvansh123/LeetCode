class Solution {
    int solve(int i,string s,int n,vector<int>&dp)
    {
        if(i==n)
        return 1;

        if(s[i]=='0')
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int ans=solve(i+1,s,n,dp);
        if((i<n-1)&&((s[i]=='1')||(s[i]=='2'&&s[i+1]<'7')))
            ans+=solve(i+2,s,n,dp);
        return dp[i]=ans;
    }
public:
    int numDecodings(string s) {
        if(s=="")
        return 0;
        vector<int>dp(s.size()+1,-1);
        return solve(0,s,s.size(),dp);
    }
};

