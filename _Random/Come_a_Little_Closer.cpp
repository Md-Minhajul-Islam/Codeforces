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

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int test_case;

void solve()
{
    int n; cin >> n;

    map<ll, ll> row, col;
    ll l = 1e18, r = 0ll, u = 1e18, d = 0ll;

    vector<pll> v(n);
    for(int i = 0; i < n; i++)
    {
    	ll x, y; cin >> x >> y;
    	v[i] = {x, y};
    	row[x]++; col[y]++;
    	l = min(l, y);
    	r = max(r, y);
    	u = min(u, x);
    	d = max(d, x);
    }
    if(n == 1)
    {
    	cout << "1\n";
    	return;
    }
    ll ans = 1ll*(r-l+1ll)*(d-u+1ll);
    if(row[u] == 1ll)
    {
    	ll l_ = 1e18, rr = 0ll, uu = 1e18, dd = 0ll;
    	for(int i = 0; i < n; i++)
    	{
    		ll x = v[i].fi;
    		ll y = v[i].se;
    		if(x == u) continue;
    		l_ = min(l_, y);
	    	rr = max(rr, y);
	    	uu = min(uu, x);
	    	dd = max(dd, x);
    	}
    	ll tot_row = dd-uu+1ll;
    	ll tot_col = rr-l_+1ll;
    	ans = min(ans, 1ll*tot_row*tot_col);
    	if(ans < n) ans += min(tot_col, tot_row);
    }
    if(row[d] == 1ll)
    {
    	ll l_ = 1e18, rr = 0ll, uu = 1e18, dd = 0ll;
    	for(int i = 0; i < n; i++)
    	{
    		ll x = v[i].fi;
    		ll y = v[i].se;
    		if(x == d) continue;
    		l_ = min(l_, y);
	    	rr = max(rr, y);
	    	uu = min(uu, x);
	    	dd = max(dd, x);
    	}
    	ll tot_row = dd-uu+1ll;
    	ll tot_col = rr-l_+1ll;
    	ans = min(ans, 1ll*tot_row*tot_col);
    	if(ans < n) ans += min(tot_col, tot_row);
    }
    if(col[l] == 1ll)
    {
    	ll l_ = 1e18, rr = 0ll, uu = 1e18, dd = 0ll;
    	for(int i = 0; i < n; i++)
    	{
    		ll x = v[i].fi;
    		ll y = v[i].se;
    		if(y == l) continue;
    		l_ = min(l_, y);
	    	rr = max(rr, y);
	    	uu = min(uu, x);
	    	dd = max(dd, x);
    	}
    	ll tot_row = dd-uu+1ll;
    	ll tot_col = rr-l_+1ll;
    	ans = min(ans, 1ll*tot_row*tot_col);
    	if(ans < n) ans += min(tot_col, tot_row);
    }
    if(col[r] == 1ll)
    {
    	ll l_ = 1e18, rr = 0ll, uu = 1e18, dd = 0ll;
    	for(int i = 0; i < n; i++)
    	{
    		ll x = v[i].fi;
    		ll y = v[i].se;
    		if(y == r) continue;
    		l_ = min(l_, y);
	    	rr = max(rr, y);
	    	uu = min(uu, x);
	    	dd = max(dd, x);
    	}
    	ll tot_row = dd-uu+1ll;
    	ll tot_col = rr-l_+1ll;
    	ans = min(ans, 1ll*tot_row*tot_col);
    	if(ans < n) ans += min(tot_col, tot_row);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}