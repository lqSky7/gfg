//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
    long long fact(long long z){
        if(z==1){return 1;}
        return z*fact(z-1);
    }
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> arrr;
        for(long long k=1; fact(k)<=n; k++)
        {
            
            if (fact(k)<=n){
            arrr.push_back(fact(k));
                
            }
            else{break;}
        }
        return arrr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends