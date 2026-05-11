# 👋 Welcome to Vision CSE  

This repository is for the **15 Days of Code Challenge** organized by **Vision CSE** 🚀  

## 📌 About the Challenge
- Duration: **2 phases of 15 Days**
- Goal: Code every day and build consistency  
- Task: Fork this repository, and update your progress here!  

## 11/5/2026

- solved one question from leetcode on the topic binary search on answers.
- Ques Name- Minimum days to make M bouquets
    [LINK](https://leetcode.com/u/Atharva9_P/)
- Firstly tried with linear search , when i got TLE then tried to solve with binary search..
### Linear search code



      ```cpp
      class Solution {
    public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        if(m*k > n)  return -1;
        int mini=  *min_element(bloomDay.begin(),bloomDay.end());
        int maxi=  *max_element(bloomDay.begin(),bloomDay.end());
            for(int i= mini; i<=maxi;i++){
                int adj=0;int bouq=0;
                for(int j=0;j<n;j++){
                    if(bloomDay[j]<=i) adj++;
                    else{
                        bouq+= adj/k;
                        adj=0;
                    }
                }
                bouq+= adj/k;
                if(bouq>=m) return i;
                
            }
            return -1;
    }
};
```

### Binary search
   ```cpp
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
```





