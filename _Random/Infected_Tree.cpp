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

void child_dfs(int u, int par, vii &child_cnt, vii adj[])
{
	for(auto v: adj[u])
	{
		if(v == par) continue;
		child_dfs(v, u, child_cnt, adj);
		child_cnt[u] += child_cnt[v];
	}
}

int fun(int u, int par, vii &child_cnt, vii adj[])
{
	vii child;
	for(auto &v: adj[u])
	{
		if(v != par) child.pb(v);
	}
	if(child.size() == 0) return 0;

	if(child.size() == 1)
		return child_cnt[child[0]]-1;
	else
	{
		int op1 = 0, op2 = 0;
		return max(child_cnt[child[0]]-1+fun(child[1], u, child_cnt, adj), child_cnt[child[1]]-1+fun(child[0], u, child_cnt, adj));
	}
}

void solve()
{
    int n; cin >> n;
    vii adj[n+5];
    vii child_cnt(n+5, 1);
    for(int i = 1; i < n; i++)
    {
    	int u, v; cin >> u >> v;
    	adj[u].pb(v); adj[v].pb(u);
    }
   	child_dfs(1, -1, child_cnt, adj);
   	cout << fun(1, -1, child_cnt, adj) << "\n";
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