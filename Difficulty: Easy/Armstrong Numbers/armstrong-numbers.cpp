//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int last, sum=0, copyn =n;
        while(n != 0){
            last = n%10;
            n = n/10;
            sum = sum + pow(last, 3);    
        }
        if(copyn == sum){
            return "true";
        }    
        else{return "false";}
    }
        
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends