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
        vector<vector<long>> dp(n+1,vector<long>(k+1,0));

        dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=min(i,k);j++)
            {
                dp[i][j]=((dp[i-1][j-1]%mod)+((((i-1)%mod)*dp[i-1][j]%mod)%mod))%mod;
            }
        }
        return (int)dp[n][k];
    }
};