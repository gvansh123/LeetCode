class Solution {
    public int maxDepth(String s) {
        int ans = 0, cur = 0;
        for (int i = 0; i < s.length(); ++i) 
        {
            if (s.charAt(i) == '(')
                ans = Math.max(ans, ++cur);
            if (s.charAt(i) == ')')
                cur--;
        }
        return ans;
    }
}