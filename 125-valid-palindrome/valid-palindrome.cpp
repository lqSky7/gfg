class Solution {
public:
    string toLower(string s){
        string str="";
        int n=s.size();
        for(int i=0; i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0'&&s[i]<='9'))
                str+= tolower(s[i]);
        }
        return str;
    }

    

    
bool isPalindromeHelper(const string& s, int left, int right) {
        if (left >= right) {
            return true;
        }
        
        if (s[left] != s[right]) {
            return false;
        }
        
        return isPalindromeHelper(s, left + 1, right - 1);
    }
    


    int isPalindrome(string s){
        string sss = toLower(s);
        return isPalindromeHelper(sss, 0, sss.length() -1);


    }
};