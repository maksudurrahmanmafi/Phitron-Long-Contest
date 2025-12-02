#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
     int ans =n*m-n-m+1;
     cout<<ans<<'\n';
    }
    return 0;
}
