#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;      
        vector<long long>v(n);

        long long xr = 0;
        for (int i = 0; i < n; ++i) {
            cin >>v[i] ;
            xr ^= v[i];
        }
        cout << (xr ? "first" : "second") << '\n';
    }
    return 0;
}
