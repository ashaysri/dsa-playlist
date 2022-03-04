class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> dp(102,vector<double>(102));
        dp[0][0]=(double)poured;
        for(int r {};r<=query_row;r++){
            for(int c {};c<=r;c++){
                double q=(dp[r][c]-1)/2;
                if(q>0){
                    dp[r+1][c]+=q;
                    dp[r+1][c+1]+=q;
                }
            }
        }
        return min(1.0,dp[query_row][query_glass]);
    }
};