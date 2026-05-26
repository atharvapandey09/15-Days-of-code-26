// Valid anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26]={0};
        for(auto c: s){
            freq[c-97]++;
        }
        for(auto c:t){
            freq[c-97]--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]>0 || freq[i] <=-1) return false;
        }
        return true;
    }
};