class Solution {
public:
    int fib(int n) {
        int c;
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
        
    }
};