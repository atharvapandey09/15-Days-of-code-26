// Reverse Words in a String III

class Solution {
public:

   void reversed(string* str,int i ,int j){
        while(i<j){
            swap((*str)[i], (*str)[j]);
            i++;
            j--;
        }
      
    }
    string reverseWords(string s) {
        if(s.size()==1) return s;
        int i=0;
        int j;
        for(int k=0;k<s.size();k++){
            if(isspace(s[k])){
                j= k-1;
                reversed(&s,i,j);
                i=k+1;
            }

        }
        j=s.size()-1;
        reversed(&s,i,j);

        return s;
    }
};