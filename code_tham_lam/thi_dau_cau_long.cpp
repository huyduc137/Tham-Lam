# include <bits/stdc++.h>
# define ll long long
# define fi first
# define se second
# define MAX 1000005
using namespace std;

ll n, m, q;
pair <ll , ll> td[MAX];
pair <ll , ll> mt[MAX];
pair <ll , ll> all[MAX];

ll solve(ll k)
{
    multiset <ll> candidate;
    ll id = 1;
    for (ll i = k ; i <= k+n-1 ; i++)
    {
        mt[id].fi = all[i].fi;
        mt[id].se = all[i].se;
        id++;
    }
    sort(td + 1 , td + n + 1);
    sort(mt + 1, mt + n +1);
    ll j = 1 , res = 0;
    for (ll i = 1 ; i <= n ; i++)
    {
        while(j <= n && mt[j].fi < td[i].fi)
            candidate.insert(mt[j++].se);
        if (candidate.empty() || *candidate.begin() >= td[i].se) continue;
        else
        {
            auto it = candidate.lower_bound(td[i].se);
            it-- , res++;
            candidate.erase(it);
        }
    }
    return res;
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> q;
    for (ll i = 1 ; i <= n ; i++) cin >> td[i].fi;
    for (ll i = 1 ; i <= n ; i++) cin >> td[i].se;
    for (ll i = 1 ; i <= m ; i++) cin >> all[i].fi;
    for (ll i = 1 ; i <= m ; i++) cin >> all[i].se;
    while(q--)
    {
        ll k; cin >> k;
        cout << solve(k) << endl;
    }
}
