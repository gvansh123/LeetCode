class Solution {
    public int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        int n = nums.length;
        int left = 0;
        int maxFrequency = 0;
        long sum = 0;

        for (int right = 0; right < n; ++right) {
            sum += nums[right];

            while ((long)nums[right] * (right - left + 1) > sum + k) {
                sum -= nums[left];
                ++left;
            }

            maxFrequency = Math.max(maxFrequency, right - left + 1);
        }

        return maxFrequency;

    }
}