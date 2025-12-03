#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> F(N), P(N);
        for (int i = 0; i < N; i++) cin >> F[i];
        for (int i = 0; i < N; i++) cin >> P[i];

        vector<int> cost(M+1, 0);

        for (int i = 0; i < N; i++) {
            cost[F[i]] += P[i];
        }

        int ans = INT_MAX;
        for (int t = 1; t <= M; t++) {
            if (cost[t] > 0) ans = min(ans, cost[t]);
        }

        cout << ans << "\n";
    }

    return 0;
}
