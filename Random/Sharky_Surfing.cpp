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
    int n, m, l; cin >> n >> m >> l;

    vector<pll > hurdle(n), power(m);
    for(auto &x: hurdle) cin >> x.fi >> x.se;
    for(auto &x: power) cin >> x.fi >> x.se;

    ll ans = 0, have = 1, prev = 0;
	priority_queue<ll> pq;

	for(auto &h: hurdle)
	{
		int ind = -5;
		int low = prev, high = m-1;
		while(low <= high)
		{
			int mid = low+(high-low)/2;
			if(power[mid].fi < h.fi)
			{
				ind = mid;
				low = mid+1;
			}
			else high = mid-1;
		}
		for(int i = prev; i <= ind; i++)
		{
			pq.push(power[i].se);
		}
		prev = max(prev, ind+1ll);
		
		ll need = h.se-h.fi+2ll;
		while(!pq.empty() && have < need)
		{
			have += 1ll*pq.top();
			pq.pop();
			ans++;
		}
		if(have < need)
		{
			cout << "-1\n";
			return;
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