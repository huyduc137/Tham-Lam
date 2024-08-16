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
const ll maxn = 3e5 + 5;

ll n;
ll a[maxn];
ll fr[maxn], fl[maxn];

huy_dep_trai()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (ll i = 1 ; i <= 3*n ; i++) cin >> a[i];
    ll sum = 0;
    priority_queue <ll , vector <ll> , greater <ll>> q1;
    for (ll i = 1 ; i <= 3*n ; i++)
    {
        sum += a[i];
        q1.push(a[i]);
        if (q1.size() > n)
        {
            sum -= q1.top();
            q1.pop();
        }
        fl[i] = sum;
    }
    sum = 0;
    priority_queue <ll> q2;
    for (ll i = 3*n ; i >= 1 ; i--)
    {
        sum += a[i];
        q2.push(a[i]);
        if (q2.size() > n)
        {
            sum -= q2.top();
            q2.pop();
        }
        fr[i] = sum;
    }
    ll maxx = LLONG_MIN;
    for (ll i = n ; i <= 2*n ; i++)
    {
        maxx = max(maxx , fl[i] - fr[i+1]);
    }
    cout << maxx;
}
