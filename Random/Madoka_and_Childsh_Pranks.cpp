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
    string a[n];
    for(auto &x: a) cin >> x;
    if(a[0][0] == '1')
    {
    	cout << "-1\n";
    	return;
    }
    if(n == 1 && m == 1)
    {
    	cout << "0\n";
    	return;
    }
    cout << n*m << "\n";
    for(int i = n-1; i >= 0; i--)
    {
    	for(int j = m-1; j >= 0; j--)
    	{
    		if(i == 0 && j == 0) break;
    		if(a[i][j] == '0') continue;
    		if(j == 0)
    		{
    			cout << i << " " << j+1 << " " << i+1 << " " << j+1 << "\n";
    		}
    		else
    		{
    			cout << i+1 << " " << j << " " << i+1 << " " << j+1 << "\n";
     		}
    	}
    }
    for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < m; j++)
    	{
    		if(a[i][j] == '0')
    		{
    			cout << i+1 << " " << j+1 << " " << i+1 <<" " << j+1 << "\n";
     		}
    	}
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