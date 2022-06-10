class Solution {
public:
    bool isPowerOfTwo(int n) {
        int bits=0;
        while(n){
            if((n&1)==1 ) 
            {
                bits++;
                if(bits>1) return 0;                
            }
            n=n>>1;
        }
        if(bits==1)
            return 1;
        return 0;
    }
};