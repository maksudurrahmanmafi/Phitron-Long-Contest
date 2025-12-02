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
        int n;
        cin >> n;
        ll sum = 0;

        vector<int> v(9, 0); // we use index 1..8

        while (n--)
        {
            int x, y;
            cin >> x >> y;
            if (x >= 1 && x <= 8)
            {
                v[x] = max(v[x], y);
            }
        }

        int total = 0;
        for (int i = 1; i <= 8; i++)
            total += v[i];

        cout << total << "\n";
    }
    return 0;
}
