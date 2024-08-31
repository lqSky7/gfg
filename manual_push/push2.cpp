// https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-strings/longest-common-prefix/notes
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        // your code goes here
        // max vector length = 200, max per element length = 200
        // only lowercase letters, so no need to change cases.
        // simple example, if: str[stringNumber][i] == str[stringNumber+1][i], then str[stringNumber][1] == str[stringNumber+1][1]
        // if not equal then; break out of the loop, and return substring of 0, to i.
        int beforeOf = 0;
        if (str.empty()) return "";
        
        for (int elementChecker = 0; elementChecker < 200 && elementChecker < str[0].length(); elementChecker++) {
            for (int elementNumber = 0; elementNumber < str.size() - 1; elementNumber++) {
                if (str[elementNumber][elementChecker] != str[elementNumber + 1][elementChecker]) {
                    return str[0].substr(0, beforeOf);
                }
            }
            beforeOf++;
        }
        
        return 0;
    }
};