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
    int n, m; cin >> n >> m;
    ll a[n][m];
    for(int i = 0; i < n; i++)
    	for(int j = 0; j < m; j++) cin >> a[i][j];
    ll ans = 0;
	bool vis[n][m] = {0};
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(vis[i][j]) continue;
			set<pii > s;
			s.insert({i, j});
			s.insert({i, m-1-j});
			s.insert({n-1-i, j});
			s.insert({n-1-i, m-1-j});

			vll b;
			for(auto &x: s)
			{
				b.pb(a[x.fi][x.se]);
				vis[x.fi][x.se] = 1;
			}
			if(b.size() == 1) continue;
			sort(b.begin(), b.end());
			int ind1, ind2;
			if(b.size() == 2) ind1 = 0, ind2 = 1;
			else ind1 = 1, ind2 = 2;
			ll avg1 = (b[ind1]+b[ind2])/2ll, avg2 = (b[ind1]+b[ind2]+1)/2ll;
			ll op1 = 0, op2 = 0;
			for(auto &x: b)
			{
				op1 += abs(x-avg1);
				op2 += abs(x-avg2);
			}
			ans += min(op1, op2);
		}
	}
	cout << ans << '\n';
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