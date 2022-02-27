class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        long long num=n;
        if(n<0)
            num=-num;
        double ans {1.0};
        while(num){
            if(num%2==1){
                ans*=x;
                --num;
            }
            else{
                x*=x;
                num/=2;
            }
        }
        return n<0?1/ans:ans;
    }
};