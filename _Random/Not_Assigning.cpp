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

const int N = 1e5+5;

vii adj[N];
bool vis[N];
map<pii, int> m;

void dfs(int u, int prev)
{
	vis[u] = 1;
	for(auto &v: adj[u])
	{
		if(vis[v] == 0)
		{
			if(prev == 2)
			{
				m[{min(u, v), max(u, v)}] = 3;
				dfs(v, 3);
			}
			else
			{
				m[{min(u, v), max(u, v)}] = 2;
				dfs(v, 2);
			}
		}

	}
}

void solve()
{
    int n; cin >> n;
    
    m.clear();
    for(int i = 1; i <= n; i++)
    {
    	adj[i].clear();
    	vis[i] = 0;
    }

    vii child(n+2);
    vector<pii> edge;
    for(int i = 1; i < n; i++)
    {
    	int u, v; cin >> u >> v;
    	child[u]++; child[v]++;
    	adj[u].pb(v); adj[v].pb(u);
    	edge.pb({min(u, v), max(u, v)});
    }
    int start;
	for(int i = 1; i <= n; i++)
	{
		if(child[i] == 1) start = i;
		if(child[i] > 2) {
			cout << "-1\n";
			return;
		}
	}
	dfs(start, 2);
	for(auto &e: edge)
	{
		cout << m[{e.fi, e.se}] <<" ";
	}
	cout << "\n";
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