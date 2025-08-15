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

int cnt;
int vis[1002][1002], a[1002][1002];

void dfs(int i, int j)
{
	cnt += 1;
	vis[i][j] = 1;
	if((a[i][j]&1) == 0 && vis[i][j-1] == 0) dfs(i, j-1);
	if((a[i][j]&2) == 0 && vis[i+1][j] == 0) dfs(i+1, j);
	if((a[i][j]&4) == 0 && vis[i][j+1] == 0) dfs(i, j+1);
	if((a[i][j]&8) == 0 && vis[i-1][j] == 0) dfs(i-1, j);
}

void solve()
{
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++)
    	for(int j = 0; j < m; j++) cin >> a[i][j];

    memset(vis, 0, sizeof(vis));
	vii ans;
    for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < m; j++)
    	{
    		if(vis[i][j]) continue;
    		cnt = 0;
    		dfs(i, j);
    		ans.pb(cnt);
    	}
    }
    sort(ans.begin(), ans.end(), greater<>());
    for(auto &x: ans) cout << x << " ";
    	cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t_case; cin >> t_case;
    // for(test_case = 1; test_case <= t_case; test_case++)
    // {
        solve();
    // }
    return 0;
}