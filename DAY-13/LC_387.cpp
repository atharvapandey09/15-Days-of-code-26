// First Unique character in a string

class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26]= {0};
        for(auto c:s){
            hash[c-97]++;
        }
        for(int i=0;i<s.size();i++){
            if(hash[s[i]-97]==1) return i;
        }
        return -1;
    }
};