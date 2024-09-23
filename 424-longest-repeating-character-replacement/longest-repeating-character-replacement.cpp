class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> count(26,0);
        int left=0;
        int ans=0;
        int c=0;
        for(int right=0;right<n;right++)
        {
            int temp=++count[s[right]-'A'];
            c=max(c,temp);
            if((right-left+1-c)>k)
            {
                count[s[left]-'A']--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};