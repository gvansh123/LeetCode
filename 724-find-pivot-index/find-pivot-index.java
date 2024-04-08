class Solution {
    public int pivotIndex(int[] nums) {
        int sum=0;
        for(int i:nums)
        sum+=i;
        int s=0;
        for(int i=0;i<nums.length;i++)
        {
            if(s*2==sum-nums[i])
            return i;
            s+=nums[i];
        }
        return -1;
    }
}