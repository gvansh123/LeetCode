class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int n : nums) {
            mp[n]++;
        } 
        vector<vector<int>> c(nums.size() + 1);
        for (auto& i : mp) {
            c[i.second].push_back(i.first);
        }
        vector<int> ans;
        for (int i = c.size() - 1; i >= 0; i--) {
            for (int num : c[i]) {
                ans.push_back(num);
                if (ans.size() == k) {
                    return ans;
                }
            }
        }
        return {};        
    }
};