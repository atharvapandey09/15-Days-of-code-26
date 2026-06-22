// Min lights to illuminate a road

class Solution {
public:
    int minLights(vector<int>& lights) {
        int n= lights.size();
        vector<int> v (n,0);
        int ans =0;
        bool all_zero = true;
        for(int i=0;i<n;i++){
            if(lights[i]>0) {
                all_zero = false;
                int strt = max(0,i-lights[i]);
                int end = min(n-1,i+lights[i]);
                v[strt]+=1;
                if(end+1<n) v[end+1]-=1;

            }
        }
        if(all_zero) {
            ans+= (int)ceil(n/3.0);
            return ans;

        }

        for(int i=1;i<n;i++){
            v[i]= v[i]+v[i-1];
        }
        int cnt=0;
        for(auto k:v){
            if(k>0){
                    if(cnt>0){
                        ans+=(int)ceil(cnt/3.0);
                        cnt=0;
                    }
            }
            else cnt++;
        }
        if(cnt>0) ans+=(int)ceil(cnt/3.0);
        return ans;
    }
};