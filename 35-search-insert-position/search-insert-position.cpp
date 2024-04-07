class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, r = n;
        while (s < r) 
        {
            int mid=s+(r -s)/2;
            if (nums[mid]>=target) 
            r=mid;
            else 
            s=mid+1;
        } 
        return s;
    }
};