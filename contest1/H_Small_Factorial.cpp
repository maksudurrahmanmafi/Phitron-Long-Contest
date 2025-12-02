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
     cin>>n;
     int i =1;
     ll fact =1;
     do{
        fact*=i;
        i++;
     }while(i<=n);
     cout<<fact<<'\n';
    }
    return 0;
}
