class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int start=0;
        int end=(matrix.length*matrix[0].length)-1;
        int mid=0;
        while(start<=end)
        {
            mid=end-(end-start)/2;
            int i=mid/(matrix[0].length);
            int j=mid%(matrix[0].length);
            if(matrix[i][j]==target)
            return true;
            else if(matrix[i][j]<target)
             start=mid+1;
             else
             end=mid-1;
        }
        return false;
    }
}