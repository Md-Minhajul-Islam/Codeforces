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

int fun(string &s, int n)
{
	string t = "abacaba";
	int cnt = 0;
    for(int i = 0; i < n-6; i++)
    {
    	bool f = 1;
    	for(int j = 0; j < 7; j++)
    	{
    		if(s[i+j] == t[j]) continue;
    		f = 0;
    	}
    	if(f) cnt++;
    }
    return cnt;
}


void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    string t = "abacaba";
    int cnt = fun(s, n);
    if(cnt > 1)
	{
		no; return;
	}
	if(cnt == 1)
	{
		for(int i = 0; i < n; i++) if(s[i] == '?') s[i] = 'd';
		yes;
		cout << s << "\n";
		return;
	}
	
	for(int i = 0; i < n-6; i++)
	{
		bool f = 1;
		for(int j = 0; j < 7; j++)
		{
			if(s[i+j] == t[j] || s[i+j] == '?') continue;
			f = 0;
		}

		if(f)
		{
			string ss = s;
			for(int j = 0; j < 7; j++) ss[i+j] = t[j];
			for(int j = 0; j < n; j++) if(ss[j] == '?') ss[j] = 'd';
			cnt = fun(ss, n);
			if(cnt != 1) continue;
			yes;
			cout << ss <<"\n";
			return;
		}		
	}
	no;
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