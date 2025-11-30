// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// bool isPrime(int n){
//     if(n==1) return false;
//     for(int i =2;i*i<=n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
     
//         int n;
//         cin>>n;
//         if(isPrime(n)&&n>2) cout<<-1<<'\n';
//         else{
//             for(int i =n;i>=1;i--){
//                 cout<<i<<" ";
//             }
//             cout<<'\n';
//         }
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
    while (T--) {
        int N;
        cin >> N;

        // যদি odd positions পূর্ণ করতে odd number লাগে → impossible
        if (N % 2 == 1) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> evens, odds;
        for (int i = N; i >= 1; i--) {
            if (i % 2 == 0) evens.push_back(i);
            else odds.push_back(i);
        }

        vector<int> P(N);
        int ei = 0, oi = 0;

        // odd positions: 1,3,5,... → fill largest even numbers
        for (int i = 1; i <= N; i += 2)
            P[i - 1] = evens[ei++];

        // even positions: 2,4,6,... → fill odd numbers
        for (int i = 2; i <= N; i += 2)
            P[i - 1] = odds[oi++];

        for (int x : P) cout << x << " ";
        cout << "\n";
    }
}
