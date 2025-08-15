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
    vii a(n+1), b(n+1);
    vii ind_a(n+1), ind_b(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i], ind_a[a[i]] = i;
    for(int i = 1; i <= n; i++) cin >> b[i], ind_b[b[i]] = i;

    map<pii, int> m;
	for(int i = 1; i <= n; i++)
		m[{min(a[i],b[i]), max(a[i], b[i])}]++;

	int cnt1 = 0, cnt2 = 0, mid = -1;
	for(auto &x: m)
	{
		if(x.se == 1) mid = x.fi.fi;
		cnt1 += x.se == 1;
		cnt2 += x.se == 2;
	}
	if(cnt1 > 1) {
		cout << "-1\n"; 
		return;
	}
	vector<pii> ans;
	if(cnt1 == 1)
	{
		int i = ind_a[mid], j = (n+1)/2;
		if(i != j)
		{
			ans.pb({i, j});
			swap(ind_a[a[i]], ind_a[a[j]]);
			swap(a[i], a[j]);
			swap(ind_b[b[i]], ind_b[b[j]]);
			swap(b[i], b[j]);
		}
	}
	for(int k = 1; k <= n; k++)
	{
		int i = ind_b[a[k]];
		int j = n-k+1;
		if(i != j)
		{
			ans.pb({i, j});
			swap(ind_a[a[i]], ind_a[a[j]]);
			swap(a[i], a[j]);
			swap(ind_b[b[i]], ind_b[b[j]]);
			swap(b[i], b[j]);
		}
	}
	cout << ans.size() << "\n";
	for(auto &x: ans) cout << x.fi << " " << x.se << "\n";
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