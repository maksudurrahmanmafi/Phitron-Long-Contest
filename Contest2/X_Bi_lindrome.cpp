#include <bits/stdc++.h>
using namespace std;

// Function to check if string is palindrome
bool isPalindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        // Check if all characters are same
        bool allSame = true;
        for (char c : S) {
            if (c != S[0]) {
                allSame = false;
                break;
            }
        }

        if (allSame) {
            cout << -1 << '\n';
        } else if (isPalindrome(S)) {
            cout << N - 1 << '\n';
        } else {
            cout << N - 2 << '\n';
        }
    }

    return 0;
}
