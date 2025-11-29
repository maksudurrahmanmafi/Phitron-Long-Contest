#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int x,y,k;
     cin>>x>>y>>k;
     int sum = (x+y)/k;
     if(sum%2==0) cout<<"Chef\n";
     else cout<<"Paja\n";

    }
    return 0;
}
