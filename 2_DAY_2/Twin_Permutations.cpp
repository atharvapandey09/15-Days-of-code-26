#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
 
void solve(int n){
    int z = n+1;
    for(int i=0; i<n;i++){
        int k;
        cin>>k;
        cout<<z-k<<" ";
    }
    cout<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
 
            int t;
            cin>>t;
            while(t--){
                int n;
                cin>>n;
                solve(n);
            }
   
 
    return 0;
}