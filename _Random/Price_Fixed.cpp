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
    vector<pll> a(n);
    for(auto &x: a) cin >> x.fi >> x.se;
    sort(a.begin(), a.end(), [&](auto p, auto q)
    {
    	return p.se < q.se;
    });
	int l = 0, r = n-1;
	ll ans = 0, purchased = 0;
	while(l <= r)
	{
		if(l == r)
		{
			if(purchased >= a[l].se)
			{
				ans += a[l].fi;
			}
			else
			{
				ans += min(a[l].fi, a[l].se-purchased)*2ll;
				ans += a[l].fi-min(a[l].fi, a[l].se-purchased);
			}
			l++;
		}
		else if(purchased >= a[l].se)
		{
			purchased += a[l].fi;
			ans += a[l].fi;
			l++;
		}
		else
		{
			if(a[r].fi+purchased >= a[l].se)
			{
				ll x = a[l].se - purchased;
				purchased += x+a[l].fi;
				ans += x*2ll+a[l].fi;
				a[r].fi -= x;
				if(a[r].fi == 0) r--;
				l++;
			}
			else
			{
				purchased += a[r].fi;
				ans += a[r].fi*2ll;
				r--;
			}
		}
	}
	cout << ans << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    // int t_case; cin >> t_case;
    // for(test_case = 1; test_case <= t_case; test_case++)
    // {
        solve();
    // }
    return 0;
}