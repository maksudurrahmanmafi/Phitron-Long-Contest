#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mn = min(mn, v[i]);
        }
        cout<<mn<<'\n';
        // int second_max = 0;
        // for (int i = 0; i < n; i++) {
        //     if (v[i] != mx) second_max = max(second_max, v[i]);
        // }

        // cout << second_max << "\n";
    }
}



// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<ll> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         ll mx = *max_element(v.begin(), v.end());
//         v.erase(remove(v.begin(), v.end(), mx), v.end());
//         ll mn = *max_element(v.begin(), v.end());

//         cout << mn << '\n';
//         // sort(v.rbegin(),v.rend());
//         // ll cost =v[0];
//         // // for (int i = 1; i < n; i++)
//         // //     cost %= v[i];

//         // cout << cost << '\n';
//     }
//     return 0;
// }
