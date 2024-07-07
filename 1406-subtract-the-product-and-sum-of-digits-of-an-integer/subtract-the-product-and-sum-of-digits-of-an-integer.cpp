class Solution {
        
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while(n!=0){ //loop ke end me n zero ho jayega!!
            int singledgt = n%10;
            
            sum = sum + singledgt;
            product = product*singledgt;
            n = n/10;
        }
        int answer = product - sum;
        return answer;
    }
};
