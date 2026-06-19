// Reverse Words in a String

class Solution {
public:


    void insertAns(string s  , string * ans,int strt,int end ){
        for(int k=strt ;k<=end;k++){
            (*ans).push_back(s[k]);
        }
        (*ans).push_back(' ');
    }
    string reverseWords(string s) {
        string ans = "";
        int j= s.size()-1,i=0;
        while(j>=0){
            if(!isspace(s[j])){
                i = j-1;
                while(i>=0 && !isspace(s[i])) i--;
                insertAns(s,&ans,i+1,j);
                j=i;
            }
            else j--;
        }
        ans.pop_back();

        return ans;

    }
};