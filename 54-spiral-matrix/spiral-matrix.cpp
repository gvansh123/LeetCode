class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int i=0;
        int x=0;
        int j=mat.size()-1;
        int y=mat[0].size()-1;
        while(i<=j&&x<=y)
        {
            for(int t=x;t<=y;t++)
            {
                ans.push_back(mat[i][t]);
            }
            for(int t=i+1;t<=j;t++)
            {
                ans.push_back(mat[t][y]);
            }
            for(int t=y-1;t>=x;t--)
            {
                if(i==j)
                break;
                ans.push_back(mat[j][t]);
            }
            for(int t=j-1;t>=i+1;t--)
            {
                if(x==y)
                { 
                  break;
                }
                ans.push_back(mat[t][x]);
            }
            x++;
            i++;
            y--;
            j--;
        }
        return ans;
    }
};