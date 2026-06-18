#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b) cout<<"-1\n";
        else if(d==b){
            if(c<=a) cout<<(a-c)<<endl;
            else cout<<"-1\n";
        }
        else{
            ll diff = d-b;
            if((a+diff)>=c) cout<<diff+(a+diff-c)<<endl;
            else cout<<"-1\n";
        }
    }
        
   

    return 0;
}