#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
int solve(int n){
    int pos=0,neg=0;

    while(n--){
        int k;
        cin>>k;
        if(k == -1) neg++;
        else pos++;
    }
    if(neg<=pos && neg%2==0) return 0;
    int cnt=0;
    while(1){
        if(neg<=pos && neg%2==0) return cnt;
        neg--;pos++;cnt++;

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