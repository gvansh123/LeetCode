class Solution {
    public int maximumWhiteTiles(int[][] tiles, int carpetLen) {
        Arrays.sort(tiles, (a, b) ->  a[0] - b[0]);
        int n = tiles.length;
        int[] prefix = new int[n];
        int max = 0;
        for(int i = 0; i < n; i++){
            prefix[i] = (i > 0 ? prefix[i-1] : 0) + tiles[i][1] - tiles[i][0] + 1;
        }
        for(int i = 0; i < n; i++){
            int start = tiles[i][0];
            int end = tiles[i][0] + carpetLen - 1;
            int index = helper(tiles, end, i, n - 1);
            
            int sum = prefix[index] - (i > 0 ? prefix[i-1] : 0);
            if(end < tiles[index][1]){
                sum -= tiles[index][1] - end;
            }
            max = Math.max(max, sum);
        }
        return max;
    }
    public int helper(int[][] tiles, int target, int left, int right){
        while(right - left > 1){
            int mid = left + (right-left)/2;
            if(tiles[mid][1] >= target){
                right = mid;
            }else
            { 
              left = mid;
            }
        }
        // l1 l2 r1 r2
        if(tiles[right][0] <= target){
            return right;
        }
        return left;
    }
}