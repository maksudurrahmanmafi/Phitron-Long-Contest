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
        string s;
        cin >> s;
        int cnt = count(s.begin(), s.end(), '0');
        int cnt1 = count(s.begin(), s.end(), '1');
        if (cnt == 1 || cnt1 == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
