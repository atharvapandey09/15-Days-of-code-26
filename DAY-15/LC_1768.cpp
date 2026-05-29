// Merge strings alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int  l=0,r=0;
        while(l<word1.size() && r<word2.size()){
            s.push_back(word1[l]);
            s.push_back(word2[r]);
            l++;
            r++;
        }
        while(l<word1.size()){
            s.push_back(word1[l]);
            l++;
        }
        while(r<word2.size()){
            s.push_back(word2[r]);
            r++;
        }
        
        return s;

    }
};