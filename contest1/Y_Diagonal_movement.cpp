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
        ll x, y;
        cin >> x >> y;
        //  if(x+y % 2==0)cout<<"YES"
        cout << (((x + y) % 2 == 0) ? "YES\n" : "NO\n");
    }
    return 0;
}
