#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
void solve(int x, int k){
        if(x<k){
            cout<<"1\n";
            cout<<x<<endl;
            return;
        }
        if(x%k!=0){
            cout<<"1\n";
            cout<<x<<endl;
        }
        else{
            cout<<"2\n";
            cout<<--x<<" "<<1<<endl;
            
        }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        solve(x,k);
    }

        
   

    return 0;
}