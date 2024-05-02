class Solution {
    long long mod=1e9+7;
    long long fun(int n,int k,vector<vector<int>>& dp)
    {
        if(k==0)
        return 0;
        if(n==k)
        return 1;
        if(dp[n][k]!=-1)
        return dp[n][k];
        long ans=0;
        long maxi=fun(n-1,k-1,dp)%mod;
        long notmaxi=(((n-1)%mod)*fun(n-1,k,dp)%mod)%mod;
        ans=(maxi+notmaxi)%mod;
        dp[n][k]=ans;
        return ans;
    }
public:
    int rearrangeSticks(int n, int k) {
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        long long ans=fun(n,k,dp);
        return (int)ans;
    }
};