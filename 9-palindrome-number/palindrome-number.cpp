class Solution {
public:
    bool isPalindrome(int x) {
        long long rev =0, last=0, copyx= x;
        if (x<0){
            return false;
        }
        while(x != 0){
            last = x%10;
            x=x/10;
            rev = rev*10+last;

        }
        return rev == copyx;
    }
};