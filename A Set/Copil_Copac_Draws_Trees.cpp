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

vector<pii> adj[200005];
map<pii, int> m;
int pre[200005];
const int inf = 100000000;

void dfs(int curr, int par)
{
    for(auto v: adj[curr])
    {
        int to = v.fi, ind = v.se;
        if(to == par) continue;
        if(pre[curr] != inf)
        {
            if(curr == 1) pre[to] = 1;
            else if(ind > m[{par, curr}]) pre[to] = pre[curr];
            else pre[to] = pre[curr]+1;
        }
        dfs(to, curr);
    }
}

void solve()
{
    int n; cin >> n;
    for(int i = 0; i <= n; i++) adj[i].clear();
    for(int i = 0; i <= n; i++) pre[i] = inf;
    for(int i = 1; i < n; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].pb({v, i});
        adj[v].pb({u, i});
        m[{u, v}] = m[{v, u}] = i;
    }
    pre[1] = 1;
    dfs(1, -1);
    int ans = *max_element(pre+1, pre+n+1);
    cout << ans << '\n';
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