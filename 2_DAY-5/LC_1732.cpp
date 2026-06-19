// Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi =0,curr_altitude=0;
        for(int k:gain){
             curr_altitude +=k;
            maxi = max(maxi,curr_altitude);
        }
        return maxi;
    }
};