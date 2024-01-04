class Solution {
    public int findMiddleIndex(int[] nums) {
        int s=0;
        for(int n:nums)
        s+=n;
        int s1=0;
        for(int i=0;i<nums.length;i++)
        {
            if(s1==s-nums[i])
            {
                return i;
            }
            s1=s1+nums[i];
            s=s-nums[i];
        }
        return -1;
    }
}