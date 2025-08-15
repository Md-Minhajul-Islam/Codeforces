#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"


int test_case;

void solve()
{
    int n; cin >> n;
    vll a(n);
    for(auto &x: a) cin >> x;

    vii adj[n];
	for(int i = 1; i < n; i++)
	{
		int u, v; cin >> u >> v;
		--u; --v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	
	ll dp[n][2];
	dp[0][0] = a[0];
	dp[0][1] = -a[0];
	//dfs
	vector<bool> vis(n);
	stack<int> s;
	s.push(0);
	while(!s.empty())
	{
		int u = s.top();
		s.pop();
		vis[u] = 1;

		for(auto &v: adj[u])
		{
			if(vis[v] == 0)
			{
				s.push(v);
			
				dp[v][0] = a[v]+dp[u][1];
				dp[v][1] = max(0ll, -a[v]+dp[u][0]);
			}
		}
	}
	for(int i = 0; i < n; i++) cout << dp[i][0] << " \n"[i+1==n];
}
	
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}