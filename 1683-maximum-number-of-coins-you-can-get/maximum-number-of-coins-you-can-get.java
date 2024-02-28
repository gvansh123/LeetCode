class Solution {
    public int maxCoins(int[] piles) {
        Arrays.sort(piles);
        int c = piles.length / 3;
        int i = piles.length - 2;
        int ans = 0;        
        while (c-- > 0) {
            ans += piles[i];
            i -= 2;
        }
        return ans;
    }
}
