class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end()), s1;
        vector<int> v;
        for (int i : nums2) {
            if (s.find(i) != s.end() && s1.find(i) == s1.end()) {
                v.push_back(i);
                s1.insert(i);
            }
        }
        return v;
    }
};