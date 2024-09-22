class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> m;
        for(auto i:strs)
        {
            string temp=i;
            sort(temp.begin(),temp.end());
            m[temp].push_back(i);
        }
        for(auto i:m)
        ans.push_back(i.second);
        return ans;
    }
};