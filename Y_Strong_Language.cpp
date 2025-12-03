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
        int n, k;
        string s;
        cin >> n >> k >> s;
        int cnt = 0;
        bool flag = false;
        for (auto c : s)
        {
            if (c == '*')
            {
                cnt++;
                if (cnt >= k)
                {
                    flag = true;
                    break;
                }
            }
            else
                cnt = 0;
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
