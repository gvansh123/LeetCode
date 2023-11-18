class Solution {
    public int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        int n = nums.length;
        int l = 0;
        int mx = 0;
        long sum = 0;

        for (int i = 0; i < n; ++i) {
            sum += nums[i];

            while ((long)nums[i] * (i - l + 1) > sum + k) {
                sum -= nums[l];
                ++l;
            }

            mx = Math.max(mx, i - l + 1);
        }

        return mx;

    }
}