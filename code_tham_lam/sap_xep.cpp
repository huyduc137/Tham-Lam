# include <bits/stdc++.h>
# define ll long long
# define ld long double
# define fi first
# define se second
# define sz(a) a.size()
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define endl "\n"
using namespace std;
typedef vector <pair <ll , ll>> vii;
typedef pair <ll , ll> pi;
const ll maxn = 1e5 + 5;

struct Data
{
    ll l , mid , r;
};
map <ll , bool> vis;
map <ll , ll> cnt;
map <ll , ll> id;
Data a[maxn];

bool cmp(const Data &a , const Data &b)
{
    if (a.mid == b.mid) return a.r < b.r;
    return a.mid > b.mid;
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll k = 1;
    for (ll i = 1 ; i <= n ; i++)
    {
        ll x; cin >> x;
        if (!vis[x])
        {
            id[x] = k++;
            vis[x] = true;
        }
        cnt[x]++;
    }
    ll p = 0;
    for (auto x : cnt)
    {
        p++;
        a[p] = {x.fi , x.se , id[x.fi]};
    }
    sort(a + 1 , a + p + 1 , cmp);
    for (ll i = 1 ; i <= p ; i++)
    {
        ll x = cnt[a[i].l];
        for (ll j = 1 ; j <= x ; j++)
        {
            cout << a[i].l << " ";
        }
    }
}
