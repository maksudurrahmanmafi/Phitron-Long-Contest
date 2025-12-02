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
        vector<int> v(n);
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 != 0)
                odd++;
        }
        if(n==1)cout<<1<<'\n';
        else{
            if(odd%2==0)cout<<1<<'\n';
            else cout<<2<<'\n';
        }
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     if (!(cin >> T)) return 0;
//     while (T--) {
//         int N;
//         cin >> N;
//         int odd = 0;
//         for (int i = 0; i < N; ++i) {
//             long long x;
//             cin >> x;
//             if (x % 2 != 0) ++odd;
//         }
//         if (N == 1) {
//             cout << 1 << '\n';
//         } else {
//             if (odd % 2 == 0) cout << 1 << '\n';
//             else cout << 2 << '\n';
//         }
//     }
//     return 0;
// }
