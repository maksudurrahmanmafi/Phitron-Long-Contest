// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         string a, b;
//         cin >> n >> a >> b;
//         vector<int> freqA(26, 0), freqB(26, 0);
//         for (auto c : a)
//             freqA[c - 'a']++;
//         for (auto c : b)
//             freqB[c - 'a']++;

//         int ans = 0;
//         for (int i = 0; i < 26; i++)
//         {
//             // ans += max(freqA[i], freqB[i]);
//              ans = max(ans, freqA[i] + freqB[i] - n);
//         }
//         cout<<max(0,ans)<<'\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        int N;
        string A, B;
        cin >> N >> A >> B;

        vector<int> freqA(26,0), freqB(26,0);
        for(char c : A) freqA[c-'a']++;
        for(char c : B) freqB[c-'a']++;

        sort(freqA.rbegin(), freqA.rend());
        sort(freqB.rbegin(), freqB.rend());

        int lettersRemaining = N;
        int minLCS = 0;

        for(int i = 0; i < 26; i++) {
            int avoidOverlap = min(freqA[i], lettersRemaining - freqB[i]);
            if(avoidOverlap < 0) avoidOverlap = 0;
            lettersRemaining -= avoidOverlap;
        }

        minLCS = N - lettersRemaining;
        cout << minLCS << "\n";
    }

    return 0;
}
