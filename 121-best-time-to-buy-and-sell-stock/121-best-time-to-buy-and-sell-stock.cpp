class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans {};
        vector<int> leftMax(prices.size());
        for(int i = prices.size()-2;i>=0;i--){
            leftMax[i]=max(leftMax[i+1],prices[i+1]);
        }
        for(int i {};i<prices.size()-1;i++){
            ans=max(ans,leftMax[i]-prices[i]);
        }
        return ans;
    }
};