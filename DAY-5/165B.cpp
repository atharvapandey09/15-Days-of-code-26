// solved codeforces question ->  165B- BURNING MIDNIGHT OIL 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int func(int v, int k){
    int sum=0;
    int  p=0;
    while((v/(pow(k,p))) != 0){
        sum+= (v/(pow(k,p)));
        p++;
    }
    return sum;
    
}

int  binary(int n, int k){
    int l=1;
    int h=n;
    int ans= -1;
    while(l<=h){
        int mid=(l+h)/2;
      
        int sum= func(mid,k);
        if(sum>=n){
            ans= mid;
            h= mid-1;
        }
       else l= mid+1;
       
    }
    return  ans ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    cout<<binary(n,k)<<endl;
    
        
   

    return 0;
}