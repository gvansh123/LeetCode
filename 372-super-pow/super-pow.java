class Solution {
    public int superPow(int a, int[] b) {
        final int mod = 1337;
        int ans = 1;
        a %= mod; 
        for (int i = b.length - 1; i >= 0; i--)
        {
            ans = (ans *power(a, b[i])) % mod;
            a = power(a, 10) % mod; 
        }
        return ans;
    }

    private int power(int a, int b) {
        if (b == 0) {
            return 1;
        }
        int ans = 1;
        a %= 1337;
        for (int i = 0; i < b; i++) {
            ans = (ans * a) % 1337;
        }
        return ans;
    }
}