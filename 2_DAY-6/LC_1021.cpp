// Remove outermost parentheses

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int cnt =0;
        for(auto ch :s){
            if(ch=='('){
                if(cnt>0) ans+=ch;
                cnt++;
            }
            else {
                cnt--;
                if(cnt>0) ans+=ch;

            }

        }
        return ans;
    }
};