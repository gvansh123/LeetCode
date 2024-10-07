class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;
        int currMaxSum = 0;
        int currMinSum = 0;
        int maxSum = INT_MIN;
        int minSum = INT_MAX;

        for(int i = 0; i < nums.size(); i++) 
        {
            totalSum += nums[i];

            currMaxSum = max(currMaxSum + nums[i], nums[i]);
            maxSum = max(maxSum, currMaxSum);
            
            currMinSum = min(currMinSum + nums[i], nums[i]);
            minSum = min(minSum, currMinSum);
        }

        return maxSum < 0 ? maxSum : max(maxSum, totalSum - minSum);
    }
};