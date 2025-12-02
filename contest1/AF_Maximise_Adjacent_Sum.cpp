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
        vector<ll> v(n);
        ll sum =0,mn=LLONG_MAX,mx=LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
           
        }
        sort(v.begin(),v.end());
        ll sm=v[0],sm2=v[1];
        ll ans = 2*sum -sm-sm2;
        cout<<ans<<'\n';
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while(T--){
//         int N;
//         cin >> N;
//         vector<long long> A(N);
//         long long sumA = 0;
//         long long minA = LLONG_MAX, maxA = LLONG_MIN;
//         for(int i=0;i<N;i++){
//             cin >> A[i];
//             sumA += A[i];
//             minA = min(minA, A[i]);
//             maxA = max(maxA, A[i]);
//         }
//         long long ans = 2*sumA - minA - maxA;
//         cout << ans << "\n";
//     }
//     return 0;
// }

