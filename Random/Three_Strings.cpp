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

int dp[1003][1003];

int fun(int i, int j, int k, string &a, string &b, string &c)
{
	if(k == c.size()) return 0;

	if(dp[i][j] != -1) return dp[i][j];

	int op1 = 1e9, op2 = 1e9, op3 = 1e9, op4 = 1e9;
	if(i < a.size())
	{
		if(a[i] == c[k]) op1 = fun(i+1, j, k+1, a, b, c);
		else op2 = fun(i+1, j, k+1, a, b, c)+1;
	}
	if(j < b.size())
	{
		if(b[j] == c[k]) op3 = fun(i, j+1, k+1, a, b, c);
		else op4 = fun(i, j+1, k+1, a, b, c)+1;
	}

	return dp[i][j] = min(min(op1, op2), min(op3, op4));
}

void solve()
{
    string a, b, c; cin >> a >> b >> c;
    memset(dp, -1, sizeof(dp));
    cout << fun(0, 0, 0, a, b, c) << "\n";
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