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

int n, m;
int vis[1003][1003];
string a[1003];

void dfs(int i, int j)
{
	vis[i][j] = 1;

	if(i-1 >= 0 && vis[i-1][j] == 0 && a[i-1][j] == 'D') dfs(i-1, j);
	if(i+1 < n && vis[i+1][j] == 0 && a[i+1][j] == 'U') dfs(i+1, j);
	if(j-1 >= 0 && vis[i][j-1] == 0 && a[i][j-1] == 'R') dfs(i, j-1);
	if(j+1 < m && vis[i][j+1] == 0 && a[i][j+1] == 'L') dfs(i, j+1);
}


void solve()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++) 
			vis[i][j] = 0;

	for(int i = 0; i < m; i++)
	{
		if(vis[0][i] == 0 && a[0][i] == 'U') dfs(0, i);
		if(vis[n-1][i] == 0 && a[n-1][i] == 'D') dfs(n-1, i);
	}
	for(int i = 0; i < n; i++)
	{
		if(vis[i][0] == 0 && a[i][0] == 'L') dfs(i, 0);
		if(vis[i][m-1] == 0 && a[i][m-1] == 'R') dfs(i, m-1);
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++) 
		{
			if(a[i][j] == '?')
			{
				if(i-1 >= 0 && vis[i-1][j] == 0) continue;
				if(i+1 < n && vis[i+1][j] == 0) continue;
				if(j-1 >= 0 && vis[i][j-1] == 0) continue;
				if(j+1 < m && vis[i][j+1] == 0) continue;
				vis[i][j] = 1;
			}
		}
	int cnt = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++) cnt += vis[i][j]; 

	cout << n*m-cnt << "\n";

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