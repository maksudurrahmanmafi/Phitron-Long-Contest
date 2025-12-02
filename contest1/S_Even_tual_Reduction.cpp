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
        int n;
        string s;
        cin >> n >> s;
        vector<int> fre(26, 0);
        for (char c : s)
            fre[c - 'a']++;

        bool flag = true;    

        for(auto c:fre){
            if(c%2!=0){
                flag=false;
                break;

            }

        }   
        if(flag)cout<<"YES\n";
        else cout<<"NO\n"; 
    }
    return 0;
}
