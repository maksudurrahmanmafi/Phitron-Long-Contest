
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         string A;
//         cin >> A;

//         int bal = 0, mx = 0;
//         for (char c : A) {
//             if (c == '(') bal++;
//             else bal--;
//             mx = max(mx, bal);
//         }

//         // minimal string with max depth = mx
//         string B(mx, '(');
//         B += string(mx, ')');

//         cout << B << "\n";
//     }

//     return 0;
// }

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
        int bal = 0, mx = 0;
        for (char c : s)
        {
            if (c == '(')
                bal++;
            else
                bal--;
            mx = max(mx, bal);
        }
        // cout<<mx<<'\n';
        string B(mx, '(');
        B += string(mx, ')');

        cout << B << "\n";
    }
    return 0;
}
