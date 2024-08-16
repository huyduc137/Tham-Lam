# include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n , k; cin >> n >> k;
    ll a[n+5];
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++) cin >> a[i];
    ll maxa = *max_element(a + 1 , a + n + 1);
    for (ll i = 1 ; i <= n ; i++)
    {
        if ((maxa - a[i]) % k != 0)
        {
            cout << "-1";
            return 0;
        }
        else ans += (maxa - a[i]) / k;
    }
    cout << ans;
}
