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
        ll n, b;
        cin >> n >> b;
        bool flag = false;
        ll ans = 0;
        while (n--)
        {
            ll W, H, P;
            cin >> W >> H >> P;
            if (P <= b)
            {
                flag = true;
                ans = max(ans, W * H);
            }
         
        }
           if (!flag)
                cout << "no tablet\n";
            else
                cout << ans << "\n";
    }
    return 0;
}
