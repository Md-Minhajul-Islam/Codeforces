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
    string s; cin >> s;
    ll a[n][m];
    for(int i = 0; i < n; i++)
    	for(int j = 0; j < m; j++)
    		cin >> a[i][j];

   	vll row(n), col(m);
    for(int i = 0; i < n; i++)
    {
    	row[i] = accumulate(a[i], a[i]+m, 0ll);
    }
    for(int i = 0; i < m; i++)
    {
    	for(int j = 0; j < n; j++) col[i] += a[j][i];
    }
    int i = 0, j = 0;
    for(int k = 0; k < s.size(); k++)
    {
    	if(s[k] == 'D')
    	{
    		a[i][j] = -1ll*row[i];
    		row[i] += a[i][j];
    		col[j] += a[i][j];
    		i++;
    	}
    	else
    	{
    		a[i][j] = -1ll*col[j];
    		row[i] += a[i][j];
    		col[j] += a[i][j];
    		j++;
    	}
    }
    a[n-1][m-1] = -1ll*row[i];
    for(int i = 0; i < n; i++)
    	for(int j = 0; j < m; j++) cout << a[i][j] << " \n"[j+1==m];
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