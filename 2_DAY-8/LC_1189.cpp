// Max number of balloons (POTD)

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> hash(26,0);
        for(auto k:text){
            hash[k-'a']++;

        }

        string s = "balon";
        int cnt=INT_MAX;
        for(char ch:s){
                if(ch=='l' || ch=='o'){
                    cnt = min(cnt,hash[ch-'a']/2);
                }
                else cnt = min(cnt,hash[ch-'a']);
        }
        
        return cnt;
    }
};