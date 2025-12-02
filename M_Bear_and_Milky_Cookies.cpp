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
        bool milk = false, flag = true;
        while (n--)
        {
            string s;
            cin >> s;
            if (s == "cookie")
            {
                if (milk)
                    flag = false;
                milk = true;
            }
            else
                milk = false;
        }
        if (milk)
            flag = false;
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
