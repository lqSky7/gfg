// https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-strings/valid-anagram/submissions

class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			//your code goes here
			if(s.length() != t.length()){return false;}
			int arr1[26] = {0};
			int arr2[26] = {0};

			for(int i=0;i<s.length();i++){
				arr1[s[i]-'a'] += 1;
				arr2[t[i]-'a'] += 1;
				
			}
			for(int i = 0; i<26;i++){
				if(arr1[i] != arr2[i]){return false;}
			}
			

			return true;
		}
};