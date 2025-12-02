// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--){
//         long long x, y;
//         cin >> x >> y;

//         long long d = x - y;

//         if(d < 0){
//             cout << "NO\n";
//             continue;
//         }

//         long long t_val = (long long)(sqrt(2*d));

//         if(t_val * (t_val + 1) / 2 == d)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
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
        ll x, y;
        cin >> x >> y;
        ll d = x - y;
        if (d < 0)
        {
            cout << "NO\n";
            continue;
        }
        ll val = (ll)(sqrt(2 * d));
        if (val * (val + 1) / 2 == d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    //  if(x==y)cout<<"YES\n";
    //  else if(x>y ){
    //     if( (x%2!=0 && y%2!=0)||(x%2==0 && y%2==0)) cout<<"YES\n";
    //  }
    //  else cout<<"NO\n";
    // }

    return 0;
}
