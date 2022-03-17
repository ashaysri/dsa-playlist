class Solution {
public:
    int hammingWeight(uint32_t n) {
        int check {1}, ans {};
        for(int i {};i<32;i++){
            if(((check<<i)&n)!=0)
                ans++;
        }
        return ans;
    }
};