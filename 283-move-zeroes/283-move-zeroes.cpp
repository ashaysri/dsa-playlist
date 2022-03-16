class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=1)
            return;
        int i {}, j {};
        while(i<nums.size()){
            if(nums[i]!=0)
                nums[j++]=nums[i];
            i++;
        }
        while(j<nums.size())
            nums[j++]=0;
    }
};