#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S; // Binary string, length 4

        int x_count, y_count;

        // X-axis
        if (S[0] == '1' && S[1] == '1') x_count = 21;   // Left + Right allowed
        else if (S[0] == '1') x_count = 11;             // Only Left allowed (-10 to 0)
        else if (S[1] == '1') x_count = 11;             // Only Right allowed (0 to 10)
        else x_count = 1;                                // None allowed (0 only)

        // Y-axis
        if (S[2] == '1' && S[3] == '1') y_count = 21;   // Up + Down allowed
        else if (S[2] == '1') y_count = 11;             // Only Up allowed (0 to 10)
        else if (S[3] == '1') y_count = 11;             // Only Down allowed (-10 to 0)
        else y_count = 1;                                // None allowed (0 only)

        int total_cells = x_count * y_count;           // Total visitable cells
        cout << total_cells << "\n";
    }

    return 0;
}
