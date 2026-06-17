// Q1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y;
    cin>>x>>y;
    if(abs(x-y)<=2) cout<<"Interesting\n";
    else cout<<"Boring\n";

}

// Q2

#include <bits/stdc++.h>
using namespace std;

void solve(int m,int n){
    if(m==n) {
        cout<<"0\n";
    }
    else if(m>n) cout<<(m-n)<<endl;
    else{
        if((m&1)^(n&1)) cout<<"1\n";
        else cout<<"0\n";
    }
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        solve(m,n);
    }
}

// Q3

#include <bits/stdc++.h>
using namespace std;
int solve(int n, int k){
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
                int fans=0;
                fans+=(v[i]+v[j]);
                fans+= (sum-(v[i]+v[j]))/2;
                if(fans>k) cnt++;
        }
    }
    return cnt;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
}
