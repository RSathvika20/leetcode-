class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
        return false;
    }
    long rev=0,rem;
    long temp=x;
    while(x!=0)
    {
    rem=x%10;
    rev=rev * 10+rem;
    x=x/10;
    }
    return rev==temp;
     
    }
};