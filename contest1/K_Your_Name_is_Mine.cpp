
#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(const string &a,const  string &b) {
    int i = 0, j = 0;
    while(i < a.size() && j < b.size()) {
        if(a[i] == b[j]) i++;
        j++;
    }
    return i == a.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        string M, W;
        cin >> M >> W;

        if(isSubsequence(M, W) || isSubsequence(W, M)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// bool checkSubsequence(const string &a, const string &b) {
//     vector<int> freqA(26,0), freqB(26,0);
//     for(char c : a) freqA[c-'a']++;
//     for(char c : b) freqB[c-'a']++;

//     bool flag = true;
//     for(int i=0;i<26;i++){
//         if(freqA[i] > 0 && freqB[i] == 0) flag = false;
//     }
//     bool flag2 = true;
//     for(int i=0;i<26;i++){
//         if(freqB[i] > 0 && freqA[i] == 0) flag2 = false;
//     }

//     return flag || flag2;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while(T--) {
//         string M, W;
//         cin >> M >> W;

//         if(checkSubsequence(M,W)) cout << "YES\n";
//         else cout << "NO\n";
//     }
// }

