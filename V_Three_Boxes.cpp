#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a + b + c <= d)
            cout << 1 << '\n';
        else if (a + b <= d || a + c <= d || b + c <= d)
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }
    return 0;
}
