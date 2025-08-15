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
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    for(int i = 0; i < n; i++)
    {
    	int cnt = 0;
    	for(int j = 0; j < m; j++) cnt += s[i][j] != '.';
    	if(cnt%2)
    	{
    		cout << "-1\n";
    		return;
    	}
    }
    for(int i = 0; i < m; i++)
    {
    	int cnt = 0;
    	for(int j = 0; j < n; j++) cnt += s[j][i] != '.';
    	if(cnt%2)
    	{
    		cout << "-1\n";
    		return;
    	}
    }
    char ans[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) if(s[i][j] == '.') ans[i][j] = '.';
    for(int i = 0; i < n; i++)
    {
        int f = 1;
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == 'U')
            {
                if(f) ans[i][j] = 'W', ans[i+1][j] = 'B', f = 0;
                else ans[i][j] = 'B', ans[i+1][j] = 'W', f = 1;
            }  
        }
    }
    for(int i = 0; i < m; i++)
    {
        int f = 1;
        for(int j = 0; j < n; j++)
        {
            if(s[j][i] == 'L')
            {
                if(f) ans[j][i] = 'W', ans[j][i+1] = 'B', f = 0;
                else ans[j][i] = 'B', ans[j][i+1] = 'W', f = 1;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << ans[i][j];
        cout << "\n";
    }
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