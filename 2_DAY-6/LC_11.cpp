// Container with most water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        long long area = INT_MIN;
        while(l<r){
            long long curr_area= min(height[l],height[r])*(r-l);
            area = max(area, curr_area);
            if(height[l]<height[r]) l++;
            else if(height[l]>height[r]) r--;
            else {
                l++;r--;
            }
        }
        return area;
    }
};