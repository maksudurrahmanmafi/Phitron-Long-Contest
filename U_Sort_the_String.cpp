#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        if (is_sorted(S.begin(), S.end())) {
            cout << 0 << "\n";
            continue;
        }

        int first0 = S.find('0');
        int last1 = S.rfind('1');

        if (first0 > last1) {
            cout << 1 << "\n"; // only one block of 1s before 0s
        } else {
            cout << 2 << "\n"; // multiple blocks
        }
    }
}
