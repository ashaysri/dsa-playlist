class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int> ap(nums.size());
        for(int i {2};i<nums.size();i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                ap[i]=ap[i-1]+1;
            }
        }
        for(int i {2};i<nums.size();i++){
            ap[i]+=ap[i-1];
        }
        return ap[nums.size()-1];
    }
};