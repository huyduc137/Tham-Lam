# include <bits/stdc++.h>
# define ll long long
# define fi first
# define se second
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define endl "\n"
using namespace std;

typedef pair <ll , ll> pi;
typedef vector <pi> vii;
typedef vector <ll> vi;
const ll MAX = 1e5 + 5;

pi candy[MAX];
pi TOA_DO[MAX];
ll sum[MAX];
ll candy_id[MAX];

bool cmp(pi a , pi b)
{
    return a.se < b.se;
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
    ms(sum , 0);
    for (ll i = 1 ; i <= n ; i++) cin >> candy[i].fi >> candy[i].se;
    sort(candy + 1 , candy + n + 1, cmp);
    for (ll i = 1 ; i <= n ; i++)
    {
        sum[i] += sum[i-1] + candy[i].fi;
        candy_id[i] = candy[i].se;
    }
    for (ll i = 1 ; i <= m ; i++)
    {
        cin >> TOA_DO[i].fi >> TOA_DO[i].se;
        ll td1 = TOA_DO[i].fi , td2 = TOA_DO[i].se;
        ll l = lower_bound(candy_id + 1 , candy_id + n + 1 , td1) - candy_id;
        ll r = upper_bound(candy_id + 1 , candy_id + n + 1 , td2) - candy_id - 1;
        cout << sum[r] - sum[l-1] << " ";
    }
}
