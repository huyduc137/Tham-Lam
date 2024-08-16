# include <bits/stdc++.h>
# define fi first
# define se second
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define endl "\n"
using namespace std;
using ll = long long;
using ld = long double;
typedef pair <ll , ll> pi;
typedef vector <pi> vii;
const ll mod = 1e9 + 7;
const ll base = 31;
const ll maxn = 1e5 + 5;

ll n , m;

struct Data{
    ll l , r , id;
};

bool cmp(Data a , Data b)
{
    return a.l < b.l;
}
Data a[maxn];
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (ll i = 1 ; i <= n ; i++)
    {
        cin >> a[i].l >> a[i].r;
        a[i].id = i;
    }
    sort(a + 1 , a + n + 1 , cmp);
    for (ll i = 1 ; i <= n ; i++)
    {
        ll low = upper_bound(a + i + 1  , a + n + 1 , Data{a[i].r} , cmp) - a;
        if (low != n + 1)
        {
            cout << "YES" << endl;
            cout << a[i].id << " " << a[low].id;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
