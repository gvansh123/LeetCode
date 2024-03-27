class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if (k <= 1) return 0;
        int s = 0, e = 0, pro = 1, ans = 0;
        while (e<nums.length)
        {
            pro*=nums[e];
            while (pro >= k) 
            {
             pro/=nums[s++];
            }
            ans += 1 + (e - s);
            e++;
        }
        return ans;
    }
}