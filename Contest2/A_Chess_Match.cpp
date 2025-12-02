#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,a,b;
     cin>>n>>a>>b;
     int ans = 2*(180+n)-(a+b);
     cout<<ans<<'\n';
    }
    return 0;
}
