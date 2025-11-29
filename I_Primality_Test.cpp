#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    bool flag = true;
    if (n == 1)
    {
        flag = false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                flag = false;

        }
    }

    if(flag)cout<<"yes\n";
    else cout<<"no\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
