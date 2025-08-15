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
    int a[n][m];
    for(int i = 0; i < n; i++)
    	for(int j = 0; j < m; j++) cin >> a[i][j];

    vii clr(n*m+5, -1);
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			int cnt = 1;
			if(i-1 >= 0) cnt += (a[i][j] == a[i-1][j]);
			if(i+1 < n) cnt += (a[i][j] == a[i+1][j]);
			if(j-1 >= 0) cnt += (a[i][j] == a[i][j-1]);
			if(j+1 < m) cnt += (a[i][j] == a[i][j+1]);

			clr[a[i][j]] = max(clr[a[i][j]], min(2, cnt));
		}
	}

	ll tot = 0;
	for(int i = 1; i <= n*m; i++)
	{
		if(clr[i] != -1)
		{
			//cout << i << " " << clr[i] << "\n";
			tot += 1ll*clr[i];
		}
	}

	ll ans = 1e9;
	for(int i = 1; i <= n*m; i++)
	{
		if(clr[i] == -1) continue;
		ans = min(ans, tot-clr[i]);
	}
	cout << ans <<"\n";

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