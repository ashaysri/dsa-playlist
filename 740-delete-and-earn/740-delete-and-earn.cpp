class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> points(10001);
        for(int i:nums)
            points[i]++;
        int prev {}, prevTwo {};
        for(int i {1};i<10001;i++){
            int temp=prev;
            prev=max(prev,prevTwo+points[i]*i);
            prevTwo=temp;
        }
        return prev;
    }
};