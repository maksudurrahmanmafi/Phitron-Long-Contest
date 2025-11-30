// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) {
//         int a[4];
//         for(int i = 0; i < 4; i++) cin >> a[i];

//         bool ok = false;

//         // bitmask 1 to 15 → সব non-empty subset
//         for(int mask = 1; mask < 16; mask++){
//             int sum = 0;
//             for(int i = 0; i < 4; i++){
//                 if(mask & (1<<i)) sum += a[i];
//             }
//             if(sum == 0){
//                 ok = true;
//                 break;
//             }
//         }

//         cout << (ok ? "Yes\n" : "No\n");
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
        int a[4];
        for (int i = 0; i < 4; i++)
            cin >> a[i];

        bool ok = false;

        for (int mask = 1; mask < 16; mask++)
        {
            int sum = 0;
            for (int i = 0; i < 4; i++)
            {
                if (mask & (1 << i))
                    sum += a[i];
            }
            if (sum == 0)
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
