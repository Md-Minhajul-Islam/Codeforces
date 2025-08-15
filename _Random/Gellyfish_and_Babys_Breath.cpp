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

vll power(100005);
ll mod = 998244353ll;

void precal()
{
	ll x = 1ll;
	power[0] = x;
	for(int i = 1; i <= 100000; i++)
	{
		x *= 2ll;
		x %= mod;
		power[i] = x;
	}
}

void solve()
{
    int n; cin >> n;
    vii p(n), q(n);
    for(auto &x: p) cin >> x;
    for(auto &x: q) cin >> x;

    vii prefmx1(n), prefmx2(n);
	prefmx1[0] = 0, prefmx2[0] = 0;
	int mx1 = p[0], mx2 = q[0];
	for(int i = 1; i < n; i++)
	{

		prefmx1[i] = prefmx1[i-1];
		prefmx2[i] = prefmx2[i-1];

		if(p[i] > mx1){
			mx1 = p[i];
			prefmx1[i] = i;
		}

		if(q[i] > mx2){
			mx2 = q[i];
			prefmx2[i] = i;
		}
	}
	vll r(n);
	for(int i = 0; i < n; i++)
	{

		if(p[prefmx1[i]] > q[prefmx2[i]]){
			r[i] = (power[p[prefmx1[i]]]+power[q[i- prefmx1[i]]])%mod;
		}
		else if(p[prefmx1[i]] < q[prefmx2[i]]){
			r[i] = (power[p[i- prefmx2[i]]]+power[q[prefmx2[i]]])%mod;
		}
		else{
			if(q[i- prefmx1[i]] > p[i - prefmx2[i]]){
				r[i] = (power[p[prefmx1[i]]]+power[q[i- prefmx1[i]]])%mod;
			}
			else{
				r[i] = (power[p[i- prefmx2[i]]]+power[q[prefmx2[i]]])%mod;
			}
		}

	}
	for(int i = 0; i < n; i++) cout << r[i] << " \n"[i+1==n];
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