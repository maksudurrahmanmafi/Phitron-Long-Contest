#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while (t--)
    {
        ll n;
        cin >> n;
        int ones = __builtin_popcountll(n);
        int ans = max(0, ones - 1);
        cout << ans << '\n';
    }
    return 0;
}
