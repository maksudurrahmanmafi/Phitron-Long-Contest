#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    while(q--){
        int t;
        cin>>t;
        if(t>=mn &&t<=mx)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
