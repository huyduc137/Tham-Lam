# include <bits/stdc++.h>
# define fi first
# define se second
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define endl "\n"
# define nguyen_duc_huy int main
using namespace std;
using ll = long long;
using ld = long double;
typedef pair <ll , ll> pi;
typedef vector <pi> vii;
const ll mod = 1e9 + 7;
const ll base = 31;
const ll maxn = 1e5 + 5;



nguyen_duc_huy()
{
    ios_base :: sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n+5] , b[n+5];
        for (ll i = 1; i <= n ; i++) cin >> a[i];
        for (ll i = 1; i <= n ; i++) cin >> b[i];
        sort(a + 1 , a + n + 1);
        sort(b + 1 , b + n + 1 , greater<>());
        ll sum = 0;
        for (ll i = 1 ; i <= n ; i++)
        {
            ll maxx = max(a[i] , b[i]);
            sum += maxx;
        }
        cout << sum << endl;
    }
}
