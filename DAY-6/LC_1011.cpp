// Capacity to ship packages within D days

// Linear search (got TLE)

class Solution {
public:
    int func(vector<int> &v,int mid){
        int currday=1;
        int sum=0;
        for(int i=0;i<v.size();i++){
           
            if(sum+v[i]>mid){
                currday++;
                sum=v[i];
            }
            else{
                sum+=v[i];
            }
        }
       
        return currday;
    }
    int allsum(vector<int> &v){
        int sum=0;
        for(auto k: v) sum+=k;
     return sum;   
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n= weights.size();
        int mini= *max_element(weights.begin(),weights.end());
        int maxi= allsum(weights);
        int res;
        
        
       for(int i=mini;i<=maxi;i++){
        int ans= func(weights,i);
        if (ans<=days) return i;
       }
        return -1;
       
    }
};

//binary search

class Solution {
public: 
    int count(vector<int> &v,int mid){
        int day=1;
        int sum=0;
        for(int i=0;i<v.size();i++){
            if(sum+v[i]>mid){
                day++;
                sum=v[i];
            }
            else{
                sum+=v[i];
            }
            
        }
        return day;
    }

    int func(vector<int> &  v){
        int sum=0;
        for(auto k:v){
            sum+=k;

        }
        return sum;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int h=  func(weights);
        int ans;
        while(l<=h){
            int mid=l+(h-l)/2;
            int currday=count(weights,mid);
            if(currday<=days){
                ans= mid;
                h= mid-1;
            }
            else  l= mid+1;
        }
        return ans;
    }
};