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
        ll n, k;
        cin >> n >> k;
        ll cost =0,free=k;
        while (n--)
            {

                ll t, d;
                cin >> t >> d;
                if(free>=t)free-=t;

                else{
                    ll tk =t-free;
                    cost+=tk*d;
                    free = 0;
                }
            }
            cout<<cost<<'\n';
    }
    return 0;
}
