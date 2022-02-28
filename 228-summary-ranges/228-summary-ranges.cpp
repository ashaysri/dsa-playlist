class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i {}, j {};
        vector<string> ans;
        while(i<nums.size() && j<nums.size()){
            while(j+1<nums.size() && nums[j+1]==1+nums[j])
                j++;
            string temp {};
            if(i==j){
                temp=to_string(nums[i]);
            }
            else{
                temp=to_string(nums[i])+"->"+to_string(nums[j]);
            }
            i=++j;
            ans.push_back(temp);
        }
        return ans;
    }
};