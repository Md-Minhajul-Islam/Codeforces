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

int fun(vll a, vll b, ll n, ll h)
{
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		while(!b.empty() && a[i] >= h)
		{
			h *= b.back();
			b.pop_back();
		}
		if(h <= a[i]) break;
		else cnt++, h += a[i]/2;
	}
	return cnt;
}


void solve()
{
    ll n, h; cin >> n >> h;
    vll a(n);
    for(auto &x: a) cin >> x;
    sort(a.begin(), a.end());

	vll b;
	b.pb(2); b.pb(2); b.pb(3);
	int ans = fun(a, b, n, h);
	b.clear();
	b.pb(2); b.pb(3); b.pb(2);
	ans = max(ans, fun(a, b, n, h));
	b.clear();
	b.pb(3); b.pb(2); b.pb(2);
	ans = max(ans, fun(a, b, n, h));

	cout << ans <<"\n";
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