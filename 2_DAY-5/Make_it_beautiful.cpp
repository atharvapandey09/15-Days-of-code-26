#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
void solve(int n){
    vector<int> v(n);
    bool is_equal = true;
    for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]!=v[0]) is_equal= false;
    }
    if(is_equal) {
        cout<<"NO\n";
        return ;
    }
    swap(v[0],v[n-1]);
    swap(v[1],v[n-1]);

   
cout<<"YES\n";
    for(auto k:v){
        cout<<k<<" ";
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