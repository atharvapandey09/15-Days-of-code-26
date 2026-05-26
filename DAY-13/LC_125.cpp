// Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        if(s.size()<1) return true;
        for(auto c:s){
           if(isalnum(c)){
                if(isupper(c)) ans.push_back(tolower(c));
                else ans.push_back(c);
           }
           else continue;
        }
        int i=0;
        int j= ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};