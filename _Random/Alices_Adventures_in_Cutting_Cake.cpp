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
    ll n, m, v; cin >> n >> m >> v;
    vll a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    ll sum = 0;
	vll pref(n+4, 0), suff(n+4, 0), pref_a(n+4, 0);
	for(int i = 1; i <= n; i++)
	{
		sum += a[i];
		pref_a[i] += a[i]+pref_a[i-1];
		if(sum >= v)
		{
			pref[i]++;
			sum = 0;
		}
		pref[i] += pref[i-1];
	}
	if(pref[n] < m)
	{
		cout << -1 << "\n"; 
		return;
	}
	sum = 0;
	for(int i = n; i >= 1; i--)
	{
		sum += a[i];
		if(sum >= v)
		{
			suff[i]++;
			sum = 0;
		}
		suff[i] += suff[i+1];
	}

	ll ans = 0;
	for(int i = 1; i <= n; i++)
	{

		if(pref[i-1] >= m)
		{
			ans = max(ans, pref_a[n]-pref_a[i-1]);
			continue;
		}
		int low = i, high = n, ind = -1, target = m-pref[i-1];
		while(low <= high)
		{
			int mid = low+(high-low)/2;
			if(suff[mid] >= target)
			{
				ind = mid;
				low = mid+1;
			}
			else high = mid-1;
		}
		if(ind > i)
		{
			ind--;
			ans = max(ans, pref_a[ind]-pref_a[i-1]);
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

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}