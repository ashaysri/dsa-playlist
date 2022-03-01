class Solution {
public:
    vector<int> countBits(int n) {
        int count=0,m=0;
        vector<int> arr(n+1);
        arr[0]=0;
        for(int i{1};i<=n;i++){
            m=i;
            count=0;
            while(m){
                m&=(m-1);
                count++;
            }
            arr[i]=count;
        }
        return arr;
    }
};