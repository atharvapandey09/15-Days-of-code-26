// Ransom Note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26]= {0};
        int hash2[26]={0};
        for(auto c:ransomNote){
            hash[c-97]++;
        }
        for(auto c:magazine){
            hash2[c-97]++;
        }
        for(auto k:ransomNote){
            if(hash2[k-97]<hash[k-97])  return false;
        }
        return true;
    }
};