class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        map<vector<int>,int> m;
        for(int i=0;i<n;i++)
        m[grid[i]]++;

        for(int i=0;i<n;i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            v.push_back(grid[j][i]);
            ans+=m[v];
        }
        return ans;
    }
};