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
    ll n, k; cin >> n >> k;
    vll a(n);
    for(auto &x: a) cin >> x;
    ll mx = *max_element(a.begin(), a.end());
	vector<pll> v;
	for(int i = 0; i < n; i++)
	{
		ll x = (mx-a[i])/k*1ll;
		if(x%2) x -= 1;
		ll l = a[i]+1ll*x*k;
		ll h = a[i]+(x+1ll)*k;
		v.pb({l, 1});
		v.pb({h, -1});

		x = (mx+k-1-a[i])/k*1ll;
		if(x%2) x -= 1;
		ll l2 = a[i]+1ll*x*k;
		ll h2 = a[i]+(x+1ll)*k;
		if(l2-l > k)
		{
			v.pb({l2, 1});
			v.pb({h2, -1});
		}

	}
	sort(v.begin(), v.end(), [&](auto p, auto q)
		{
			if(p.fi == q.fi) return p.se < q.se;
			else return p.fi < q.fi;
		});
	ll entered = 0;
	for(int i = 0; i < v.size(); i++)
	{
		entered += v[i].se;
		if(entered == n)
		{
			cout << v[i].fi << "\n";
			return;
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