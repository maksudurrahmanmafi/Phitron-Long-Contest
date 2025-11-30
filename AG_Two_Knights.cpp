#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    for (ll k = 1; k <= n; ++k)
    {
        ll cells = k * k;
        ll sum = cells * (cells - 1) / 2;
        ll attack = 0;
        if (k >= 3)
            attack = 4 * (k - 1) * (k - 2);
        ll ans = sum - attack;
        cout << ans << '\n';
    }
    return 0;
}
