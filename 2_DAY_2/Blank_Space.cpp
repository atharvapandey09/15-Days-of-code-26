#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
 
int solve(int n){
    int cnt =0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k==0) cnt++;
        else{
            maxi = max(cnt,maxi);
            cnt=0;
        }
 
    }
    maxi = max(cnt,maxi);
 
    return maxi;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
 
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
          cout<<  solve(n)<<endl;
        }
   
 
    return 0;
}