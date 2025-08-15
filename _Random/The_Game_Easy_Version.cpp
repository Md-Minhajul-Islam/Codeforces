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

const int N = 4e5+5;

vii adj[N];
vii t_in(N), t_out(N), id(N), w(N), vis(N);
int cnt;

void dfs(int u, int p)
{
	t_in[u] = ++cnt;
	id[cnt] = u;
	for(auto &v: adj[u])
	{
		if(v != p) dfs(v, u);
	}
	t_out[u] = cnt;
}

void solve()
{
    int n; cin >> n;
    cnt = 0;
    for(int i = 1; i <= n; i++)
    {
    	cin >> w[i];
    	adj[i].clear();
    }

    for(int i = 1; i < n; i++)
    {
    	int u, v; cin >> u >> v;
    	adj[u].pb(v);
    	adj[v].pb(u);
    }
    dfs(1, -1);
    vii pref(n+5, 0), suff(n+5, 0);
    for(int i = 1; i <= n; i++)
    	pref[i] = max(pref[i-1], w[id[i]]);
    for(int i = n; i >= 1; i--)
    	suff[i] = max(suff[i+1], w[id[i]]);
    int mx = 0;
    for(int i = 1; i <= n; i++)
    	if(max(pref[t_in[i]-1], suff[t_out[i]+1]) > w[i] && w[i] > w[mx]) mx = i;

    cout << mx << "\n"; 
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