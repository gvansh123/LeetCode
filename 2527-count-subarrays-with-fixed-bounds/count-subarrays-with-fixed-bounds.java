class Solution {
    public long countSubarrays(int[] nums, int minK, int maxK) {
        int mn=-1;
        int mx=-1;
        long ans=0;
        int curr=-1;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]<minK||nums[i]>maxK)
            curr=i;
            if (nums[i] == minK) 
            mn = i;
            if (nums[i] == maxK) 
            mx = i;
            ans+=Math.max(0L,Math.min(mn,mx)-curr);
        }
        return ans;
    }
}