class Solution {
public:
    int r1,c1,r2,c2;

    void dfs(vector<vector<int>> &land, int i, int j){

        if(i<0 || j<0 || i>= land.size() || j >= land[0].size() || land[i][j] ==0 )
        return ;

        r1 = min(i,r1);
        c1 = min(j,c1);
        r2 = max(i,r2);
        c2 = max(j,c2);
        land[i][j] = 0;

        dfs(land , i+1, j );
        dfs(land , i-1, j );
        dfs(land , i, j-1 );
        dfs(land , i, j+1 );
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        
        vector<vector<int>> ans;

        int n= land.size();
        int m = land[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j]==1){
                    r1 = i;
                    r2 = i;
                    c1 = j;
                    c2 = j;
                    dfs(land, i,j) ;
                    ans.push_back({r1,c1,r2,c2});
                }
            }
        }
        return ans;
    }
};