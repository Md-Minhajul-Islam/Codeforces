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
    map<ll, ll> m;
    vll a(n), b;
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	m[a[i]] += a[i];
    	if(m[a[i]] == a[i]) b.pb(a[i]);
    }
    sort(b.begin(), b.end());
    vll pref(b.size());
    pref[0] = m[b[0]];
    for(int i = 1; i < b.size(); i++)
    {
    	pref[i] = pref[i-1]+m[b[i]];
    }
    set<int> s;
    s.insert(b[b.size()-1]);
    for(int i = b.size()-2; i >= 0; i--)
    {
    	if(pref[i] >= b[i+1]) s.insert(b[i]);
    	else break;
    }
    vii ans;
    for(int i = 0; i < n; i++)
    {
    	if(s.find(a[i]) != s.end()) ans.pb(i+1);
    }
    cout << ans.size() <<"\n";
    for(auto &x: ans) cout << x <<" ";
    	cout << "\n";
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