// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//       int x, y, z;
//         cin >> x >> y >> z;
//         // vector<int> v = {x, y, z};
//         // sort(v.begin(), v.end());
//         if((x+y)==z ||(y+z)==x ||(z+x)==y|| x==z ||y==z){
//             cout << "YES\n";
//             // cout << v[0] << " " << v[1] << " " << v[2] << "\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> v = {x,y,z};
        sort(v.begin(), v.end());
        if(v[0] == v[1]){
            cout << "YES\n";
            // cout << v[0] << " " << v[0] << " " << v[2] << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
