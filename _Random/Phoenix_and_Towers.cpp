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
    int n, m, x; cin >> n >> m >> x;
    vector<pii> a;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	a.pb({x, i});
    }
    
    sort(a.begin(), a.end(), greater<>());
    priority_queue<pii, vector<pii >, greater<pii >> pq;
	for(int i = 1; i <= m; i++) pq.push({0, i});
	vii ans(n);
	for(int i = 0; i < n; i++)
	{
		int x = pq.top().fi;
		int y = pq.top().se;
		
		ans[a[i].se] = y;
		pq.pop();
		pq.push({x+a[i].fi, y});
	}
	int mx = 0, mn = pq.top().fi;
	while(!pq.empty())
	{
		mx = max(mx, pq.top().fi);
		mn = min(mn, pq.top().fi);
		pq.pop();
	}
	if(mx-mn > x) no;
	else
	{
		yes;
		for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i+1==n];
	} 
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