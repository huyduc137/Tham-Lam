# include <bits/stdc++.h>
# define ll long long
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n+5];
        ll ans = 0;
        for (ll i = 1; i <= n ; i++) cin >> a[i];
        for (ll i = 1 ; i <= n ; i++)
        {
            ll x = a[i];
            ll y = a[x];
            ll z = a[y];
            if (z == i) ans = 1;
        }
        if (ans == 1) cout << "<3" << endl;
        else cout << "</3" << endl;
    }
}
