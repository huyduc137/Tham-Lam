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
const ll maxn = 1e3 + 5;

ll n;
ll dp[maxn][2];
ll a[maxn];

huy_dep_trai()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (ll i = 1 ; i <= n; i++) cin >> a[i];
    ll maxx = INT_MIN;
    for (ll i = 1 ; i <= n ; i++)
    {
        if (i == 1)
        {
            maxx = max(maxx , a[i+2] - a[i+1]);
        }
        else if (i == n)
        {
            maxx = max(maxx , a[n-1] - a[n-2]);
        }
        else
        {
            maxx = max(maxx , a[i+1] - a[i-1]);
        }
    }
    cout << maxx;
}
