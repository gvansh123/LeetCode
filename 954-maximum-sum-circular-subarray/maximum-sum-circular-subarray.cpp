class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];

        int sum=0;

        for(int i:nums)
        sum+=i;

        int currMx=nums[0];
        int mx=nums[0];
        int currMn=nums[0];
        int mn=nums[0];

        for(int i=1;i<n;i++)
        {
            currMx=max(nums[i],currMx+nums[i]);
            mx=max(currMx,mx);

            currMn=min(nums[i],currMn+nums[i]);
            mn=min(currMn,mn);
        }

        if(mn==sum)
        return mx;

        return max(mx,sum-mn);
    }
};