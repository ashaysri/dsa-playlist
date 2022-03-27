class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> vec(27,vector<bool>(9,0));
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                int t= board[i][j]-'0';
                if(t>0 && t<=9)
                {
                    if(vec[i][t-1] || vec[j+9][t-1] || vec[j/3 + 3*(i/3) +18][t-1])
                        return false;
                    else
                    { vec[i][t-1]=true;
                     vec[j+9][t-1]=true;
                     vec[j/3 + 3*(i/3) +18][t-1]=true;
                    }
                    
                }
            }
        }
        return true;
    }
};