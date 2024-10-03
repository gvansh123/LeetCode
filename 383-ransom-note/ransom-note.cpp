class Solution {
public:
    bool canConstruct(string r, string m) {
        vector<int> count(26,0);
        for(char c:m)
        count[c-'a']++;

        for(char ch:r)
        {
            if(count[ch-'a']>0)
            count[ch-'a']--;
            else
            return false;
        }
        return true;
    }
};