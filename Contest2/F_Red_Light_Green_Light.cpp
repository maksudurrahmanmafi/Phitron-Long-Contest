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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > k)
                cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
