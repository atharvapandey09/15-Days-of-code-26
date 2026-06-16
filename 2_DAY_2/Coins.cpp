#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
 
void solve(ll n , ll k){
    if(n%2==0) cout<<"YES\n";
    else{
        if(k%2==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        solve(n,k);
    }
        
   
 
    return 0;
}