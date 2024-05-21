class Solution {
    void solve(vector<int>&nums,vector<int>&subset,vector<vector<int>>&ans,int i)
    {
        if(i==nums.size())
        ans.push_back(subset);
        else
        {
            solve(nums,subset,ans,i+1);
            subset.push_back(nums[i]);
            solve(nums,subset,ans,i+1);
            subset.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        solve(nums,subset,ans,0);
        return ans;
    }
};