class Solution {
public:
    void bfsFind(vector<vector<int>>& grid, int i, int j, int& area){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
            return;
        grid[i][j]=0;
        ++area;
        bfsFind(grid,i+1,j,area);
        bfsFind(grid,i-1,j,area);
        bfsFind(grid,i,j+1,area);
        bfsFind(grid,i,j-1,area);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans {}, area {};
        for(int i {};i<grid.size();i++){
            for(int j {};j<grid[0].size(); j++){
                if(grid[i][j]==1){
                    area=0;
                    bfsFind(grid, i, j, area);
                    ans=max(ans,area);
                }
            }
        }
        return ans;
    }
};