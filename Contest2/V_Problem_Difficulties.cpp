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
        vector<int> A(4);
        map<int, int> freq;
        for (int i = 0; i < 4; i++)
        {
            cin >> A[i];
            freq[A[i]]++;
        }

        vector<int> v;
        for (auto p : freq)
            v.push_back(p.second);
        sort(v.rbegin(), v.rend()); 

        int ans = 0;
        if (v.size() == 1)
            ans = 0;
        else if (v.size() == 2)
        {
            if (v[0] == 3)
                ans = 1;
            else
                ans = 2;
        }
        else if (v.size() == 3)
            ans = 2;
        else
            ans = 2; 

        cout << ans << "\n";
    }
    return 0;
}
