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
        int n, m;
        cin >> n >> m;
        vector<bool> v(n + 1, false);
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v[x] = true;
        }
        vector<int> unfinished;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == false)
                unfinished.push_back(i);
        }
        vector<int> chef, assistant;
        for (int i = 0; i < unfinished.size(); i++)
        {
            if (i % 2 == 0)
                chef.push_back(unfinished[i]);
            else
                assistant.push_back(unfinished[i]);
        }

        if (chef.empty())
            cout << -1 << '\n';
        else{
            for(auto val:chef){
                cout<<val<<" ";
            }
            cout<<'\n';
        }
        if (assistant.empty())
            cout << -1 << '\n';
        else{
            for(auto val:assistant){
                cout<<val<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}
