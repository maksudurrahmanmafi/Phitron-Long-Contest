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
        vector<int> S(n);

        for (int i = 0; i < n; i++)
            cin >> S[i];

        sort(S.begin(), S.end());

        int ans = INT_MAX;
        for (int i = 1; i < n; i++) {
            ans = min(ans, S[i] - S[i - 1]);
        }

        cout << ans << "\n";
    }

    return 0;
}
