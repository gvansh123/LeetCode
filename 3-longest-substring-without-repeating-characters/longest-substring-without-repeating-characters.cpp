class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left=0;
        int ans=0;
        for(int right=0;right<s.size();right++)
        {
            if(st.find(s[right])==st.end())
            {
                st.insert(s[right]);
                ans=max(ans,right-left+1);
            }
            else
            {
                while(st.find(s[right])!=st.end())
                {
                    st.erase(s[left++]);
                }
                st.insert(s[right]);
            }
        }
        return ans;
    }
};