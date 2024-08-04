class Solution {
public:

    void reverseString(vector<char>& s) {   
        rec(s,0,s.size()-1);
    }
    void rec(vector<char>& s,int l, int r){
        if(l>=r){
            return;
        }

        else{
        swap(s[l],s[r]);
        rec(s, l+1, r-1);
        }
        }

    
};