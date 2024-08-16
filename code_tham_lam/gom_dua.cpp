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
const ll mod = 1e9+7;
const ll base = 31;
const ll maxn = 2e5 + 5;

ll t; 

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll sum_1 = 0 , sum_2 = 0;
        for (ll i = 1 ; i <= n ; i++)
        {
            ll x; cin >> x;
            if (x == 1) sum_1++;
            else if (x == 2) sum_2++;
            else 
            {
                sum_1 += (x - 2);
                sum_2++;
            }
        }
        cout << (sum_1 / 2) + (sum_2 / 2);
        cout<< endl;
    }
}
