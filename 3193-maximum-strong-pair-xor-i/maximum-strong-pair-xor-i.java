class Solution {
    public int maximumStrongPairXor(int[] nums) {
        int s=0;
        int e=1;
        int ans=0;
        Arrays.sort(nums);
        while(e<nums.length)
        {
            if(Math.abs((nums[e]-nums[s]))<=Math.min(nums[e],nums[s]))
            {
                ans=Math.max(ans,(nums[e]^nums[s]));
            }
            else
            {
                s++;
                e=s;
            }
            if(e==nums.length-1&&s<e)
            {
                e=s;
                s++;
            }
            e++;
        }
        return ans;
    }
}