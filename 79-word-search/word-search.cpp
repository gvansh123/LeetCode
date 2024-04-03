class Solution {
    // bool isSafe(int i,int j,vector<vector<char>>& board)
    // {
    //     return i>=0&&j>=0&&i<board.size()&&j<board[0].size();
    // }
    bool helper(vector<vector<char>>& board, string word,int index,int i,int j)
    {
        if(index==word.length())
        return true;
        if(i<0||j<0||i>=board.size()||j>=board[0].size())
        return false;
        if(word.at(index)==board[i][j])
        {
            char temp=board[i][j];
            board[i][j]='^';
        bool ans=helper(board,word,index+1,i+1,j)|helper(board,word,index+1,i-1,j)|helper(board,word,index+1,i,j+1)|helper(board,word,index+1,i,j-1);
        board[i][j]=temp;
        return ans;
        }
        return false;
    }
bool solve(vector<vector<char>>& board, string word)
{
    if(word=="")
    return true;
    else if(word.length()>(board.size()*board[0].size()))
    return false;
    else
    for(int i=0;i<board.size();i++)
    for(int j=0;j<board[0].size();j++)
    if(word.at(0)==board[i][j])
    if(helper(board,word,0,i,j)==true)
    return true;
    return false;
}
public:
    bool exist(vector<vector<char>>& board, string word) {
        return solve(board,word);
    }
};