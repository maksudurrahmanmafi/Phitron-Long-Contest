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
     string s;
     cin>>s;
     int cnt0 = count(s.begin(),s.end(),'0');
     int cnt1 = count(s.begin(),s.end(),'1');
     int ans =(cnt0*a)+(cnt1*b);
     cout<<ans<<'\n';
    }
    return 0;
}
