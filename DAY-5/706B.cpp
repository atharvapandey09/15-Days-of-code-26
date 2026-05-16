// solved codeforces question -> 706B- INTERESTING DRINK

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
void func(vector<int> &x, int n, int q){
    while(q--){
        int i;
        cin>>i;
        auto it = upper_bound(x.begin(),x.end(),i);
        auto ind = it- x.begin();
        cout<<ind<<endl;
        
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
 
        int n;
        cin>>n;
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        int q;
        cin>>q;
        sort(x.begin(),x.end());
        func(x,n,q);
        
   
 
    return 0;
}
