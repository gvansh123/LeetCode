class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int ans=INT_MAX;
        int curr=0;
        for(int j=0;j<nums.size();j++)
        {
            curr+=nums[j];
            if(curr>=target)
            {
                while(curr>=target)
                {
                    ans=min(ans,j-i+1);
                    curr-=nums[i];
                    i++;
                }
            }
        }
        if(ans==INT_MAX)
        return 0;
        return ans;
    }
};