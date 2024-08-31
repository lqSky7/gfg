// https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-strings/largest-odd-number-in-a-string


class Solution {
public:
        string largeOddNum(string& s){
    string largestOdd;


   for (int i = s.length() - 1; i >= 0; i--) {
 
        if (s[i] % 2 != 0) {
 
           largestOdd = s.substr(0, i + 1);
            break;
        }
    }
 
        for(int i=0; i<largestOdd.size(); i++){
            if(largestOdd[i]=='0'){
                continue;
            }
            largestOdd = largestOdd.substr(i,largestOdd.size());
            return largestOdd;
        }


       return "";
    }
};

