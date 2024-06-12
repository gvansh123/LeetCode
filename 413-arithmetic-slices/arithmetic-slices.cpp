class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        if(n<3)
        return 0;
        int p=0;
        for(int i=1;i<n-1;i++)
        {
            if((nums[i]-nums[i-1])==(nums[i+1]-nums[i]))
            {
              p++;
              ans+=p; 
            }
            else
            p=0;
        }
        return ans;
    }
};