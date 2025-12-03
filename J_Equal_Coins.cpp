#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int X, Y;
        cin >> X >> Y;
        int total = X + 2 * Y;

        if (total % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        int half = total / 2;
        // half মান বানানোর জন্য X কয়েন দিয়ে পূরণ করা যাবে কিনা চেক করা
        if (half <= 2 * Y) { 
            // 2-rupee কয়েন দিয়ে পূর্ণ করা সম্ভব হলে, 1-rupee কয়েন ব্যবহার করতে হবে কিনা চেক
            int remaining = half % 2;
            if (remaining <= X)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            // 2-rupee কয়েন সব ব্যবহার করতে হবে, বাকি remainder 1-rupee দিয়ে পূরণ
            int remaining = half - 2 * Y;
            if (remaining <= X)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
