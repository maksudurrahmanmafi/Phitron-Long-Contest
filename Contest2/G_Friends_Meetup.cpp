// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--){
//         ll x, y;
//         cin >> x >> y;

//         ll d = x - y;

//         if(d < 0){
//             cout << "NO\n";
//             continue;
//         }

//         ll t_val = (ll)(sqrt(2*d));

//         if(t_val * (t_val + 1) / 2 == d)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll x, y;
//         cin >> x >> y;
//         ll d = x - y;
//         if (d < 0)
//         {
//             cout << "NO\n";
//             continue;
//         }
//         ll val = sqrt(2 * d);
//         if (val * (val + 1) / 2 == d)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     //  if(x==y)cout<<"YES\n";
//     //  else if(x>y ){
//     //     if( (x%2!=0 && y%2!=0)||(x%2==0 && y%2==0)) cout<<"YES\n";
//     //  }
//     //  else cout<<"NO\n";
//     // }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(ll X1, ll X2)
{
    if (X1 < X2)
        return false;
    if (X1 == X2)
        return true;

    ll d = 2 * (X1 - X2);
    ll t = (ll)(sqrt(d));

    return (t * (t + 1) == d || (t + 1) * t == d);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll X1, X2;
        cin >> X1 >> X2;
        if (solve(X1, X2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
