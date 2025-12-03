#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        sort(A.begin(), A.end());
        long long cost = 0;
        int expected = 0;

        for (int i = 0; i < N; i++) {
            if (A[i] >= expected) {
                cost += A[i] - expected;
                expected++;
            }
        }
        cout << cost << '\n';
    }
    return 0;
}
