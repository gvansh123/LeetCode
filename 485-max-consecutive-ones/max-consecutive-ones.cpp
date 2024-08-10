class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=0;
        int l=0;
        int curr=0;
        int ans=0;
        while(l<nums.size())
        {
            if(nums[l]==1)
            {
                l++;
                curr++;
            }
            else
            {
                ans=max(ans,curr);
                curr=0;
                s=l+1;
                l++;
            }
        }
        ans=max(ans,curr);
        return ans;
    }
};