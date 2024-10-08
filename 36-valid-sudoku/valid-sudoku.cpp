class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9,vector<int>(9,0));
        vector<vector<int>> col(9,vector<int>(9,0));
        vector<vector<int>> box(9,vector<int>(9,0));
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int rowColIndex=board[i][j]-'0'-1;
                    int boxIndex=i/3*3+j/3;

                    if(row[i][rowColIndex]||col[j][rowColIndex]||box[boxIndex][rowColIndex])
                    return false;
                    else
                    {
                        row[i][rowColIndex]=1;
                        col[j][rowColIndex]=1;
                        box[boxIndex][rowColIndex]=1;
                    }
                }
            }
        }
        return true;
    }
};