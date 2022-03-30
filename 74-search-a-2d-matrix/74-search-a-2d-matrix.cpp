class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int low=0,high=matrix.size()*matrix[0].size()-1,mid=0;
        while(low<=high){
            mid=(low+high)/2;
            if(matrix[mid/n][mid%n]==target)
                return true;
            else if(matrix[mid/n][mid%n]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};