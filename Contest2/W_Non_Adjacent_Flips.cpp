#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        string S;
        cin >> N >> S;

        int ops = 0;
        int i = 0;
        while(i < N){
            if(S[i] == '1'){
                int cnt = 0;
                while(i < N && S[i] == '1'){
                    cnt++;
                    i++;
                }
                ops += (cnt + 1) / 2; // ceil(cnt/2)
            } else {
                i++;
            }
        }
        cout << ops << "\n";
    }
    return 0;
}
