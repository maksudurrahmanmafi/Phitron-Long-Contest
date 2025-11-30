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

        ll n;
        cin >> n;
        int cnt = 0;
        cnt += n / 2048;
        n = n % 2048;
        cnt+= __builtin_popcount(n);
        cout << cnt << '\n';
    }
    return 0;
}