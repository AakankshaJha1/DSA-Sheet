class Solution {
public:
    int reverse(int x) {
        int new_number=0;
        while(x){
            int digit=x%10;
            if((new_number>INT_MAX/10)||(new_number<INT_MIN/10))
                return 0;
            new_number= new_number*10+ digit;
            x/=10;
        }
        return new_number;
    }
};