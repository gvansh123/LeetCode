class Solution {
    public int[][] constructProductMatrix(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int mod=12345;
        int p[][]=new int[grid.length][grid[0].length];
        for(int i=0;i<n;i++)
        {
            Arrays.fill(p[i],1);
        }
         long fc = 1; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                p[i][j] = (int) (p[i][j] * fc % mod); 
                fc = fc * grid[i][j] % mod; 
            }
        }

        fc = 1;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                p[i][j] = (int) (p[i][j] * fc % mod); 
                fc = fc * grid[i][j] % mod; 
                }
        }

        return p; 
    }
}