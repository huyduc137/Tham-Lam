# include <bits/stdc++.h>
# define fi first
# define se second
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define endl "\n"
# define huy_dep_trai int main
using namespace std;
using ll = long long;
using ld = long double;
typedef pair <ll , ll> pi;
typedef vector <pi> vii;
const ll mod = 1e9 + 7;
const ll base = 31;
const ll maxn = 1e5 + 5;

huy_dep_trai()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll a[n+5];
    ll ans = 0;
    for (ll i = 1 ; i <= n ; i++) cin >> a[i];
    for (ll i = 1 ; i <= n ; i++)
    {
        while(a[i] != 0)
        {
            ll tem = a[i];
            for (ll j = i + 1 ; j <= n ; j++)
            {
                if (a[j] == 0) break;
                tem = min(tem , a[j]);
            }
            for (ll j = i ; j <= n ; j++)
            {
                if (a[j] == 0) break;
                a[j] -= tem;
            }
            ans += tem;
        }
    }
    cout << ans;
}
