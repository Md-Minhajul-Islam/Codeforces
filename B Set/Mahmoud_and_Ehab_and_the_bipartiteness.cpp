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

const int N = 1e5+5;
vii adj[N];
set<int> s, t;
bool vis[N];
int f = 0;
void dfs(int u)
{
    vis[u] = 1;
    if(f) t.insert(u);
    else s.insert(u);
    for(auto v: adj[u])
    {
        if(vis[v]) continue;
        int ff = f;
        if(f) f = 0;
        else f = 1;
        dfs(v);
        f = ff;
    }
}

void solve()
{
    int n; cin >> n;
    ll cnt[100005] = {0};
    for(int i = 1; i < n; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
        cnt[u]++; cnt[v]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(vis[i]) continue;
        dfs(i);
    }
    ll ans = 0;
    ll sz = t.size();
    for(auto x: s) ans += sz-cnt[x];
    cout << ans << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
       solve();
    return 0;
}