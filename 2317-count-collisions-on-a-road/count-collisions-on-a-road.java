class Solution {
    public int countCollisions(String s) {
        int ans = 0, x = 0;
        char prev = s.charAt(0);

        for(int i = 1; i < s.length(); ++i) {
            char curr = s.charAt(i);

            if(prev == 'R' && curr == 'L') {
                ans += 2 + x;
                prev = 'S';
                x = 0;
            } else if((prev == 'S' && curr == 'L') || (prev == 'R' && curr == 'S')) {
                ans += 1 + x;
                prev = 'S';
                x = 0;
            } else {
                if(curr == 'R' && prev == 'R')
                    ++x;
                prev = curr;
            }
        }

        return ans;
    }
}