class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans {},i {};
        int len=columnTitle.size()-1;
        while(i<=len){
            ans=ans*26+(int)(columnTitle[i]-'A'+1);
            i++;
        }
        return ans;
    }
};