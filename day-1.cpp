 ## LINEAR_SEARCH


class Solution {
public:
    int func(vector<int> &v, int m, int k,int  mid){
            int adj=0,bouq=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<=mid) adj++;
            else{
                bouq+= adj/k;
                adj=0;
            }

        }
        bouq += adj/k;
        if(bouq>=m) return 1;
        else return  0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        if((long long) m*k > n)  return -1;
        int mini=  *min_element(bloomDay.begin(),bloomDay.end());
        int maxi=  *max_element(bloomDay.begin(),bloomDay.end());
           int l= mini;
           int h= maxi;
           int ans= -1;
           while(l<=h){
            int mid= l+(h-l)/2;
            int res= func(bloomDay,m,k,mid);
            if(res==1){
                ans=mid;
                h= mid-1;
            }
            else l=mid+1;
           }
        return ans;
    }
};
