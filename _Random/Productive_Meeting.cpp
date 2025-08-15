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
    priority_queue<pii > pq;
    for(int i = 1; i <= n; i++)
    {
    	int x; cin >> x;
    	if(x) pq.push({x, i});
    }
    vector<pii > ans;
    while(pq.size() > 1)
    {
    	int px, py, qx, qy;
    	px = pq.top().fi-1;
    	py = pq.top().se;
    	pq.pop();
    	qx = pq.top().fi-1;
    	qy = pq.top().se;
    	pq.pop();
    	ans.pb({py, qy});
    	if(px) pq.push({px, py});
    	if(qx) pq.push({qx, qy});
    }
    cout << (int)ans.size() << "\n";
    for(auto &x: ans) cout << x.fi << " " << x.se << "\n";
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