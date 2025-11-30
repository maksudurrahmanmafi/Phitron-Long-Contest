#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S; 

        int x_count, y_count;

        // X-axis
        if (S[0] == '1' && S[1] == '1')
            x_count = 21; 
        else if (S[0] == '1')
            x_count = 11; 
        else if (S[1] == '1')
            x_count = 11; 
        else
            x_count = 1; 
        // Y-axis
        if (S[2] == '1' && S[3] == '1')
            y_count = 21; 
        else if (S[2] == '1')
            y_count = 11; 
        else if (S[3] == '1')
            y_count = 11; 
        else
            y_count = 1; 

        int ans = x_count * y_count; 
        cout << ans << "\n";
    }

    return 0;
}
