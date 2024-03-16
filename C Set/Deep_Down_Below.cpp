// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

bool cmp(pll a, pll b)
{
    return a.fi < b.fi;
}

void solve()
{
    int n; cin >> n;
    pll b[n];
    for(int i = 0; i < n; i++)
    {
        ll k; cin >> k;
        ll mx = -1;
        for(ll j = 0; j < k; j++)
        {
            ll x; cin >> x;
            mx = max(mx, x-j);
        }
        b[i].fi = mx; b[i].se = k;
    }  
    sort(b, b+n, cmp);
    ll mx = -1;
    ll x = 0;
    for(int i = 0; i < n; i++)
    {
        mx = max(mx, b[i].fi-x);
        x += b[i].se;
    }
    cout << mx+1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}