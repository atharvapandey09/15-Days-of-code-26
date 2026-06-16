// Next Greater Element II

// brute force
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
            vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            int j=(i+1)%n;
            bool present = false;
            while(j!=i){
                if(nums[j]>nums[i]){
                    ans[i]=nums[j];
                    present = true;
                    break;
                }
                j = (j+1)%n;

            }
            if(!present) ans[i]= -1;

        }
        return ans;
    }
};

// optimised
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
            vector<int> ans(n);
            stack<int> st;
            for(int i = 2*n-1; i>=0;i--){
                int in = i%n;
                while(!st.empty() && st.top()<=nums[in]) st.pop();
                if(st.empty() && i<n) ans[i] = -1;
                else {
                    if(i<n){
                        ans[i]=st.top();
                    }

                }
                st.push(nums[in]);
            }  

            return ans;

    }
};