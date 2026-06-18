// Sort colors

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int> mp1, mp2; // mp1- s->t , mp2-t->s
        for(int i=0;i<s.size();i++){
            char ch1= s[i];     // ch1 -> s
            char ch2 = t[i]; // ch2->t
            if(mp1[ch1]==0){
                mp1[ch1]= ch2;
            }
            else{
                if(mp1[ch1]!=ch2) return false;
            }
            if(mp2[ch2]==0){
                mp2[ch2]= ch1;
            }
            else{
                if(mp2[ch2]!=ch1) return false;
            }
        }

        return true;
    }
};