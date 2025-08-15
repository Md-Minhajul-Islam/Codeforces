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
    int n, m, k; cin >>  n >> m >> k;
    vii a(n), b(m);
    map<int, int> mp1, mp2, mp3;
    for(auto &x: a) cin >> x;
    for(auto &x: b){
    	cin >> x;
    	mp1[x]++;
    	mp2[x]++;
    }
    sort(b.begin(), b.end());
	int ans = 0, cnt = 0;
	for(int i = 0; i < m; i++)
	{
		auto it = lower_bound(b.begin(), b.end(), a[i]);
		if(it != b.end() && *it == a[i] && mp1[a[i]] > 0) 
		{
			cnt++;
			mp1[a[i]]--;
		}
		mp3[a[i]]++;
	}
	// cout << cnt << "\n";
	if(cnt >= k) ans++;

	for(int i = m; i < n; i++)
	{
		auto it = lower_bound(b.begin(), b.end(), a[i-m]);
		if(it != b.end() && *it == a[i-m] && mp3[a[i-m]] <= mp2[a[i-m]])
		{
			mp1[a[i-m]]++; cnt--;
		}
		mp3[a[i-m]]--;
		it = lower_bound(b.begin(), b.end(), a[i]);
		if(it != b.end() && *it == a[i] && mp1[a[i]] > 0)
		{
			mp1[a[i]]--;
			cnt++;
		}
		mp3[a[i]]++;
		if(cnt >= k) ans++;
		// cout << cnt << "\n";
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