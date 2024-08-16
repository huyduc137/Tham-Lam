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
const ll maxn = 1e4 + 5;

struct car
{
    ll a , b;
    double x;
    ll i;
};

bool cmp(car a , car b)
{
    return a.x > b.x;
}

ll n;
car k[maxn];

huy_dep_trai()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (ll i = 1 ; i <= n ; i++) cin >> k[i].a;
    for (ll i = 1 ; i <= n ; i++)
    {
        cin >> k[i].b;
        k[i].x = (1.0*k[i].a / k[i].b);
        k[i].i = i;
    }
    ll day = 0 , money = 0;
    sort(k + 1 , k + n + 1 , cmp);
    for (ll i = 1 ; i <= n ; i++)
    {
        day += k[i].b;
        money += day*k[i].a;
    }
    cout << money << endl;
    for (ll i = 1 ; i <= n ; i++) cout << k[i].i << " ";
}
