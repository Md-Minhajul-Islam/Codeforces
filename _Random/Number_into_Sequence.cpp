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

vll a;
void precal()
{
	bool mark[100105] = {0};
	mark[0] = mark[1] = 1;
	for(ll i = 2; i <= 100100; i++)
	{
		if(mark[i] == 0)
		{
			a.pb(i);
			for(ll j = i*i; j <= 100100; j += i)
				mark[j] = 1;
		}
	}
}

void solve()
{
    ll n; cin >> n;
    vector< vll > ans;
    int mx = 0;
    bool f = 1;
    for(int i = 0; a[i]*a[i] <= n; i++)
    {
    	ll m = n;
    	vll curr;
    	if(m%a[i] == 0 && (m/a[i])%a[i] == 0)
    	{
			while((m/a[i])%a[i] == 0)
			{
				m /= a[i];
				curr.pb(a[i]);
			}
			if(n != 1)
		    {
		    	if(curr.empty()) curr.pb(m);
		    	else if(m%curr.back() == 0) curr.pb(m);
		    }
		    ans.pb(curr);
		    mx = max(mx, (int)curr.size());
		    f = 0;
    	}
    }
    if(f)
    {
    	cout << 1 <<"\n" << n <<"\n";
    	return;
    }
    
    cout << mx << "\n";
    for(auto v: ans)
    {
    	if(v.size() == mx)
    	{
    		for(auto &x: v) cout << x << " ";
    			cout <<"\n";
    		return;
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

    precal();

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}