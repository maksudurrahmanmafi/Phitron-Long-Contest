#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    if(!(cin >> n)) return 0;
    for(long long k = 1; k <= n; ++k) {
        long long cells = k * k;
        long long total_pairs = cells * (cells - 1) / 2;
        long long attacks = 0;
        if(k >= 3) attacks = 4 * (k - 1) * (k - 2);
        long long ans = total_pairs - attacks;
        cout << ans << '\n';
    }
    return 0;
}
