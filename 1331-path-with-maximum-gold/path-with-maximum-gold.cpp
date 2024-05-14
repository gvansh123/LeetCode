class Solution {
public:
    int solve(vector<vector<int>>& g, int i, int j) {
  if (i < 0 || j < 0 || i >= g.size() || j >= g[i].size() || g[i][j] <= 0)  
  return 0;
  g[i][j] = -g[i][j];
  auto res = max({ solve(g, i + 1, j), solve(g, i, j + 1), solve(g, i - 1, j), solve(g, i, j - 1) });
  g[i][j] = -g[i][j];
  return g[i][j] + res;
}
int getMaximumGold(vector<vector<int>>& grid, int res = 0) {
  for (auto i = 0; i < grid.size(); ++i)
    for (auto j = 0; j < grid[i].size(); ++j)
      res = max(res, solve(grid, i, j));
  return res;
}
};