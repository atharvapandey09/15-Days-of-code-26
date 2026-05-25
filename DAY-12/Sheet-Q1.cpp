
// kth element of two sorted arrays

// brute force -->

class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int> v;
        for(auto k: a) v.push_back(k);
        for(auto k :b) v.push_back(k);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};

// better approach -->

class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int> v;
        int i,j=0;  // i to a and j to b
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]) {
                v.push_back(a[i]);
                i++;
            }
            else{
                v.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
             v.push_back(a[i]);
             i++;
        }
        while(j<b.size()){
            v.push_back(b[j]);
                j++;
        }
        return  v[k-1];
        
    }
};