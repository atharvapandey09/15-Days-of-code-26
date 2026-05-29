// Valid  palindrome II


class Solution {
public:

    bool func(string s , int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0, j= s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                bool ans1 =func(s,i+1,j);
                bool ans2 =func(s,i,j-1);
               if(ans1 || ans2) return true;
               else if(ans1== false && ans2==false) return false;
            }
            else{
                i++;
                j--;
            }
    }
            return true;
    }
};