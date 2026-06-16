// Next Greater Element I

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
                unordered_map<int,int> mp;
                stack<int> st;
                vector<int> ans;
                for(int i = nums2.size()-1;i>=0;i--){
                        if(st.empty()) {
                            mp[nums2[i]]=-1;
                            st.push(nums2[i]);
                            continue;
                        }
                        if(st.top()<nums2[i]){
                            while(!st.empty() && st.top()<nums2[i]) st.pop();
                            if(st.empty()) mp[nums2[i]]=-1;
                            else mp[nums2[i]]=st.top();
                        }
                        else mp[nums2[i]]=st.top();
                        st.push(nums2[i]);
                }
                for(auto k:nums1){
                    ans.push_back(mp[k]);
                }
                return ans;
    }
};