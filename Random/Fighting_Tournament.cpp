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
    int n, q; cin >> n >> q;

    vii a(n), ind(n+2);
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	ind[a[i]] = i;
    }

    vii pref_max(n), suff_nearest_max(n);
	pref_max[0] = a[0];

	for(int i = 1; i < n; i++) pref_max[i] = max(a[i], pref_max[i-1]);
	stack<int> s;
	for(int i = n-1; i >= 0; i--)
	{
		while(!s.empty() && s.top() < a[i]) s.pop();

		if(!s.empty()) suff_nearest_max[i] = s.top();
		else suff_nearest_max[i] = a[i];
		s.push(a[i]);
	}

	while(q--)
	{
		int pos, k; cin >> pos >> k;
		pos--;
		if(pref_max[pos] != a[pos] || pos > k)
		{
			cout << "0\n";
			continue;
		}
		int ans = 0;
		if(pos != 0){
			 ans++; k -= pos;
		}
		if(suff_nearest_max[pos] == a[pos]) ans += k;
		else ans += min(k, ind[suff_nearest_max[pos]]-pos-1);
		cout << ans << "\n";
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