
// kth missing postive number

// optimal soln by binary search

class Solution {
public:

    int func(vector<int> & arr,int k, int l, int h){
        int n= arr.size();
        if(h<0) return k;
        int toAdd= arr[h]+(k-(arr[h]-(h+1)));
         return toAdd;
    }
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int  h= arr.size()-1;
        while(l<=h){
            int mid= l+ (h-l)/2;
            if((arr[mid]-(mid+1))<k) l= mid+1;
            else  h= mid-1;
        }
       return  func(arr,k,l,h);
     
    }
};