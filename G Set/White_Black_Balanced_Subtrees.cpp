// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair

string s;
void check(int u, int prnt, vii a[], vector<pii> &p)
{
    for(auto v: a[u])
        check(v, u, a, p);
    if(prnt != -1)
    {
        p[prnt].se += p[u].se;
        p[prnt].fi += p[u].fi;
    }
}

void solve()
{
    int n; cin >> n;
    vii a[n+1];
    for(int i = 2; i <= n; i++)
    {
        int v; cin >> v;
        a[v].pb(i);
    }
    cin >> s;
    s = "*"+s;
    vector<pii> p(n+1, {0, 0});
    for(int i = 1; i <= n; i++)
    {
        if(s[i] == 'B') p[i].se++;
        else p[i].fi++;
    }
    check(1, -1, a, p);
    int cnt = 0;
    for(auto &x: p)
    {
        if(x.fi == x.se && x.fi != 0) cnt++;
        // cout << x.fi << ' ' << x.se << '\n';
    }
    cout << cnt << '\n';
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