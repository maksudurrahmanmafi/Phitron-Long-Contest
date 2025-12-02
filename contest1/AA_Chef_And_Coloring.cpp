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
     string s;
     cin>>n>>s;
     int r=0,g=0,b=0;
     for(auto c:s){
        if(c=='R')r++;
        else if(c=='G') g++;
        else b++;
     }
     int paint = n-max({r,g,b});
     cout<<paint<<'\n';
    }

    return 0;
}
