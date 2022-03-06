class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even {}, odd = {1};
        while(even<nums.size() && odd<nums.size()){
            if(nums[even]%2==1 && nums[odd]%2==0)
                swap(nums[even],nums[odd]);
            if(nums[even]%2==0)
                even+=2;
            if(nums[odd]%2)
                odd+=2;
        }
        return nums;
    }
};