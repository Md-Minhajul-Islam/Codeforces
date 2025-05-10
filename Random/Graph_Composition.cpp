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

const int N = 2e5+5;

vii f[N], g[N];
vii visf(N), visg(N), root(N); 
int cnt;

void dfsg(int u, int r)
{
	visg[u] = 1;
	root[u] = r;

	for(auto &v: g[u])
	{
		if(visg[v]) continue;
		dfsg(v, r);
	}
}

void dfsf(int u, int r)
{
	cnt += (root[u] != r);
	visf[u] = 1;
	for(auto &v: f[u])
	{
		if(visf[v]) continue;
		if(root[u] == root[v])
			dfsf(v, root[u]);
		else cnt++;
	}
}

void solve()
{
    int n, m1, m2; cin >> n >> m1 >> m2;

    for(int i = 0; i <= n; i++)
    {
    	f[i].clear(); g[i].clear();
    	visf[i] = visg[i] = root[i] = 0;
    }

    for(int i = 0; i < m1; i++)
    {
    	int u, v; cin >> u >> v;
    	f[u].pb(v);
    	f[v].pb(u);
    }
    for(int i = 0; i < m2; i++)
    {
    	int u, v; cin >> u >> v;
    	g[u].pb(v);
    	g[v].pb(u);
    }

    for(int i = 1; i <= n; i++)
    {
    	if(visg[i]) continue;
    	dfsg(i, i);
    }
    cnt = 0;
    for(int i = 1; i <= n; i++)
    {
    	if(visf[i]) continue;
    	dfsf(i, i);
    }
    cout << cnt <<"\n";
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