class Solution {
public:
    uint reverseBits(int n) {
        uint t=0;
        for(int i=0;i<32;i++){
            if((n>>i)&1){
                t=t|(1<<(31-i));
            }
        }
        return t;
        
    }
};