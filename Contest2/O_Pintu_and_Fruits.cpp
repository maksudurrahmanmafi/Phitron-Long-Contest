#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> F(n), P(n);
        for (int i = 0; i < n; i++)
            cin >> F[i];
        for (int i = 0; i < n; i++)
            cin >> P[i];

        vector<ll> cost(m + 1, 0),cnt(m+1,0);

        for (int i = 0; i < n; i++)
        {
            int ft = F[i];
            cost[ft] += P[i];
            cnt[ft]++;
        }

        ll ans = LLONG_MAX;
        for (int j = 1; j <= m; j++)
        {
            if (cost[j] > 0)
            {
                ans = min(ans, cost[j]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
