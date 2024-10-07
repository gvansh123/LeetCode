class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int mid;
        int end=matrix[0].size()*matrix.size()-1;
        while(start<=end)
        {
            mid=end-(end-start)/2;
            int i=mid/matrix[0].size();
            int j=mid%matrix[0].size();
            if(matrix[i][j]==target)
            return 1;
            else if(matrix[i][j]>target)
            end=mid-1;
            else
            start=mid+1;
        }
        return 0;
    }
};