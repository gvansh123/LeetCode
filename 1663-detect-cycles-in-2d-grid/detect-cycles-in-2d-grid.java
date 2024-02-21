class Solution {

    static int n;
    static int m;
    static char arr[][];

    static boolean solve(int r, int c, int chi, int chj,int vis[][]){
        
        int dir[][] = {{0,1},{0,-1},{-1,0},{1,0}};
        vis[r][c]=1;
        boolean ans = false;

        for(int i=0; i<4; i++){
            int nr = r+dir[i][0];
            int nc = c+dir[i][1];
            if(nr>=0 && nc>=0 && nr<n && nc<m && arr[nr][nc]==arr[r][c]){
                if(vis[nr][nc]==1 && nr!=chi && nc!=chj) 
                return true;
                if(vis[nr][nc]!=1) 
                ans = ans | solve(nr,nc,r,c,vis);
            }
        }
        return ans;
    }
    public boolean containsCycle(char[][] grid) {
        n = grid.length;
        m = grid[0].length;
        arr = grid;

        int vis[][] = new int[n][m];
        for(var a : vis) 
            Arrays.fill(a,-1);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char ch = grid[i][j];
                if(vis[i][j]!=1){
                    boolean ans = solve(i,j,-1,-1,vis);
                    if(ans==true) return true;
                }
            }
        }
        return false;
    }
}