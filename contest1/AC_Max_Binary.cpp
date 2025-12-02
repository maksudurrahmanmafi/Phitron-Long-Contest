#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (s[0] == '0')
        {
            s[0] = '1';
            k--;
        }
        s+=string(k,'0');

        cout << s << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while(T--){
//         int N, K;
//         string S;
//         cin >> N >> K >> S;

//         for(int i = 0; i < N && K > 0; i++){
//             if(S[i] == '0'){
//                 S[i] = '1';
//                 K--;
//             }
//         }

//         cout << S << "\n";
//     }

//     return 0;
// }
