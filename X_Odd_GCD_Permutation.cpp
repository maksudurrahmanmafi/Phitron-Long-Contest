#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPrime(int n){
    if(n==1) return false;
    for(int i =2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     
        int n;
        cin>>n;
        if(isPrime(n)&&n>2) cout<<-1<<'\n';
        else{
            for(int i =n;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}
