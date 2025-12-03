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
        int n, x;
        cin >> n >> x;
        int ans = (n + x -1)/x;
        cout<<ans<<'\n';
        // if (n % x == 0)
        //     cout << 1 << '\n';
        // else
        //     cout << ans + 1 << '\n';
    }
    return 0;
}
