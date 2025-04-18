class Solution {
public:
    double myPow(double a, int num) {
       if(num<0){
           
           a=1/a;
         }
        long n=labs(num);
        double ans=1;
        double x=a;
        while(n>0){
            if(n%2==1){
                ans=ans*x;
            }
            x=x*x;
            n=n/2;
        }
        return ans;

    }
};