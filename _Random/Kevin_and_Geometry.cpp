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
    vii a(n);
    map<int, int> m;

    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	m[a[i]]++;
    }
    int p = 0; vii b;
    for(auto &x: m)
    {
    	if(x.se >= 4)
    	{
    		cout << x.fi << " " << x.fi << " " << x.fi <<" " << x.fi << "\n";
    		return; 
    	}
    	if(x.se >= 2 && p == 0) p = x.fi;
    	else if(x.se >= 2)
    	{
    		cout << x.fi << " " << x.fi << " " << p <<" " << p << "\n";
    		return;
    	}

    	if(x.se == 1) b.pb(x.fi);
    }
    sort(b.begin(), b.end());
    if(p != 0 && m[p] == 3)
    {
    	for(int i = 0; i < b.size(); i++)
    	{
    		if(b[i] < p || b[i] < p*3)
    		{
    			cout << b[i] <<" " << p << " " << p << " " << p << "\n";
    			return;
    		}
    	}
    }
    if(p != 0 && b.size() > 1)
    {
		int mn = 1e9;
		for(int i = 1; i < b.size(); i++)
		{
			if(abs(b[i]-b[i-1]) < p*2)
			{
				cout << b[i] << " " << b[i-1] <<" " << p << " " << p << "\n";
				return;
			}
		}
    }
    cout << "-1\n";
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