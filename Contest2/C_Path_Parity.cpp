#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     if(n%2!=0 && k==0) cout<<"No\n";
     else cout<<"Yes\n";
    }
    return 0;
}
