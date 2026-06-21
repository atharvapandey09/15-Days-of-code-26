// Maximum icecream bars

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxi = *max_element(costs.begin(),costs.end());
        
        vector<int> freq(maxi+1,0);
        for(auto k:costs){
            freq[k]++;
        }
        vector<int> ans ;
        for(int i=0;i<maxi+1;i++){
            while(freq[i]--){
                ans.push_back(i);
            }

        }
        int cnt=0;
        for(auto k:ans){
            if(k<=coins) {
                cnt++;
                coins-=k;
            }
        }
        return cnt;
    }
};