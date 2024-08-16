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

ll n;
ll a[maxn];

huy_dep_trai()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ll minn = INT_MAX;
    for (ll i = 1 ; i <= n ; i++) cin >> a[i];
    for(ll i = 1 ; i <= n ; i++)
    {
        for (ll j = i + 1 ; j <= n ; j++)
        {
            if (a[i] == a[j]) minn = min(minn , j - i);
        }
    }
    if (minn == INT_MAX) cout << -1;
    else cout << minn;
    return 0;
}
