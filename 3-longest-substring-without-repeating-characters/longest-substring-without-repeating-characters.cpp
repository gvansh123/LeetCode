class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        vector<int> v(128, -1);
        int left = 0;        
        for (int right = 0; right < n; right++) {
            if (v[s[right]] >= left) {
                left = v[s[right]] + 1;
            }
            v[s[right]] = right;
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};