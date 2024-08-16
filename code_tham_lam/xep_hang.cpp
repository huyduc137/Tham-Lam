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
const ll mod = 14062008;
const ll base = 31;
const ll maxn = 1e5 + 5;

huy_dep_trai()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, q; cin >> n >> q;
    ll a[n+5];
    for (ll i = 1; i <= n ; i++) cin >> a[i];
    while(q--)
    {
        ll maxx = LLONG_MIN , minn = LLONG_MAX;
        ll x , y; cin >> x >> y;
        for (ll i = x ; i <= y ; i++)
        {
            maxx = max(a[i] , maxx);
            minn = min(a[i] , minn);
        }
        cout << maxx - minn << endl;
    }
}
