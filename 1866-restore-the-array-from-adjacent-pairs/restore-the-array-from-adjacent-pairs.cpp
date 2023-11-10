class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>> m;
        for(auto i : adjacentPairs)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        vector<int>ans;
        int  s=INT_MIN;
        for(auto i : m)
        {
            if(i.second.size()==1)
            {
                s=i.first;
                break;
            }
        }
        int r=INT_MIN;
        ans.push_back(s);

        for(int i=1;i<=adjacentPairs.size();i++)
        {
            vector<int>& v = m[s];
            int temp = (v[0] == r) ? v[1] : v[0];
            ans.push_back(temp);
            r = s;
            s = temp;
        }
        return ans;
    }
};