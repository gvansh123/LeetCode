class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s;
        unordered_map<string,vector<string>> ump;
        for(string i:strs){
            string a = i;
            sort(a.begin(),a.end());
            ump[a].push_back(i);
        }
        for(auto i:ump){
            s.push_back(i.second);
        }
        return s;
    }
};