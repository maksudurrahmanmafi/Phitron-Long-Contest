#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n;
     string a,b;
     cin>>n>>a>>b;
     int ans1 =count(a.begin(),a.end(),'0');
     int ans2 =count(b.begin(),b.end(),'0');
     if(ans1==ans2) cout<<"YES\n";
     else cout<<"NO\n";
    }
    return 0;
}
