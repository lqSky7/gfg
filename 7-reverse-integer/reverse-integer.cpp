class Solution {
public:
    int reverse(int x) {
        int rev =0, last = 0;        
        while(x != 0){
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0; // Return 0 to indicate overflow or underflow
            }

            last = x%10;
            x = x/10;
            
            rev = rev * 10 + last;

        }
        return rev;
        
    }
    
};