#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int T;
    // cin >> T;
    // while(T--) {
    //     int N;
    //     cin >> N;

    //     vector<int> P(N);
    //     for(int i = 0; i < N; i++) P[i] = i+1;

    //     // Reverse the array to produce any valid permutation
    //     reverse(P.begin(), P.end());

    //     for(int i = 0; i < N; i++) {
    //         cout << P[i] << " ";
    //     }
    //     cout << "\n";
    // }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }
        reverse(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout<<"\n";
    }
    return 0;
}
