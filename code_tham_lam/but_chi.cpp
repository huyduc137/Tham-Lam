# include <bits/stdc++.h>
# define fi first
# define se second
# define ms(a , n) memset(a , n , sizeof(a))
# define all(a) a.begin() , a.end()
# define endl "\n"
# define huy_dep_trai int main
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
typedef vector <pair <ll , ll>> vii;
typedef pair <ll , ll> pi;
const ll base = 31;
const ll mod = 1e9 + 7;
const ll maxn = 3*1e5 + 5;

huy_dep_trai()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--)
    {
        ll a , b , x , y;
        cin >> a >> b >> x >> y;
        ll ok = 0;
        ll minn = INT_MAX;
        for (ll i = 0 ; i <= (ll)1e4 + 5 ; i++)
        {
            ll u = ((b*y) - (a*x) + (i*y))/x ;
            if ((u + a)*x == (i + b)*y && u >= 0)
            {
                minn = min(minn , i + u);
            }
        }
        if (minn == INT_MAX) cout << -1 << endl;
        else cout << minn << endl;
    }
}
