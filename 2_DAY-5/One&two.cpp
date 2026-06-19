#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back

int solve(int n){
    vector<int> v(n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==2) cnt ++;
    }
    if(cnt  ==0) return 1;
    int passed=0;
    for(int i=0;i<n-1;i++){
        if(v[i]==2) {
                cnt--;
                passed++;
        }
        if(cnt ==passed) return (i+1);
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }

        
   

    return 0;
}