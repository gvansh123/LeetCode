class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
            while (lo <= hi)
            {
                int mid = (lo + hi) >> 1;
                if (target == nums[mid])
                    return mid;
                else if (nums[mid] <= nums[hi])
                {
                    if (target >= nums[mid] && target <= nums[hi])
                        lo = mid + 1;
                    else
                        hi = mid - 1;
                }
                else
                {
                    if (target >= nums[lo] && target <= nums[mid])
                        hi = mid - 1;
                    else
                        lo = mid + 1;
                }
            }
return -1;
    }
};