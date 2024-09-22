class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left=0;
        int ans=0;
        for(int right=0;right<s.size();right++)
        {
            if(mp.find(s[right])==mp.end()||mp[s[right]]<left)
            {
                mp[s[right]]=right;
                ans=max(ans,right-left+1);
            }
            else
            {
                left=mp[s[right]]+1;
                mp[s[right]]=right;
            }
        }
        return ans;
    }
};