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
     set<int>st;
     for(int i =0;i<n;i++){
        int n;
        cin>>n;
        st.insert(n);
     }
     cout<<st.size()<<'\n';
    }
    return 0;
}
