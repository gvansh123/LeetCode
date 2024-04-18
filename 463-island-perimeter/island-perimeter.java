class Solution {
    public int islandPerimeter(int[][] arr) {
        int m = arr.length;
        int n = arr[0].length;
        int ans = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(arr[i][j] == 1){
                    if(i>0 && arr[i-1][j] == 0 || i == 0){
                        ans++;
                    }
                    if(j<n-1 && arr[i][j+1] == 0 || j == n-1){
                        ans++;
                    }
                    if(i<m-1 && arr[i+1][j] == 0 || i == m-1){
                        ans++;
                    }
                    if(j>0 && arr[i][j-1] == 0 || j == 0){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
}