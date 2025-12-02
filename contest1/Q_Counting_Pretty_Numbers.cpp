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
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for (int i = l; i <= r; i++)
        {
            int last = i % 10;
            if (last == 2 || last == 3 || last == 9)
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
