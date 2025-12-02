
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> even, odd;
        for (int i = n; i >= 1; i--) {
            if (i % 2 == 0) even.push_back(i);
            else odd.push_back(i);
        }

        vector<int> v(n);
        int ei = 0, oi = 0;
        for (int i = 1; i <= n; i += 2)
            v[i - 1] = even[ei++];
        for (int i = 2; i <= n; i += 2)
            v[i - 1] = odd[oi++];

        for (int x : v) cout << x << " ";
        cout << "\n";
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// bool isvrime(int n){
//     if(n==1) return false;
//     for(int i =2;i*i<=n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nULL);
//     int t;
//     cin>>t;
//     while(t--){
     
//         int n;
//         cin>>n;
//         if(isvrime(n)&&n>2) cout<<-1<<'\n';
//         else{
//             for(int i =n;i>=1;i--){
//                 cout<<i<<" ";
//             }
//             cout<<'\n';
//         }
//     }
//     return 0;
// }

