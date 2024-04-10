class Solution {
public:
    int longestCommonSubsequence(string s, string t) {
    int n = s.length();
    int m = t.length();
    vector<int> curr(m + 1, 0);
    vector<int> prev(m + 1, 0);
    int x = min(n, m);
    for (int i = 0; i <= m; i++)
        prev[i] = 0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if (s[i - 1] == t[j - 1])
                curr[j] = 1 + prev[j - 1];
            else
            {
                int left = prev[j];
                int right = curr[j - 1];
                curr[j]=max(left, right);
            }
        }
        prev = curr;
    }
    return prev[m];
    }
};