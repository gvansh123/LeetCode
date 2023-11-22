class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &nums)
    {
        int n = nums.size();
        queue<pair<int, int>> q;
        q.emplace(make_pair(0, 0));
        vector<int> res;

        while(!q.empty())
        {
            pair<int, int> it = q.front();
            q.pop();
            res.emplace_back(nums[it.first][it.second]);

            if(it.second == 0 && it.first < n - 1)
            {
                q.emplace(make_pair(it.first + 1, it.second));
            }

            if(it.second + 1 < nums[it.first].size())
            {
                q.emplace(make_pair(it.first, it.second + 1));
            }
        }

        return res;
    }
    
};