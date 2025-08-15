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
    ll n, m, k; cin >> n >> m >> k;
    vector<pii > a(n+1);
    for(int i = 1; i <= n; i++)
    {
    	cin >> a[i].fi;
    	a[i].se = i;
    }
    sort(a.begin()+1, a.end());
    ll need = (k+m-1ll)/m;
   	vector<pii > b(need+1);
   	for(int i = 1; i <= need; i++) b[i] = a[i];
   	sort(b.begin()+1, b.end(), [&](auto p, auto q){
   		return p.se < q.se;
   	});

    vll pref(need+1, 0);
    for(int i = 1; i <= need; i++)
    {
        pref[i] = 0ll+pref[i-1]+b[i].fi;
    }
    ll ans, x = (k%m == 0) ? m : k%m;

    for(ll i = 1; i <= need; i++)
    {
        ll prev = 1ll*pref[i-1]*m + 1ll*(i-1ll)*(i-2ll)*m*m/2ll;
        ll curr = 1ll*b[i].fi*x + 1ll*(i-1ll)*m*x;
        ll after = 1ll*(pref[need]-pref[i])*m + 1ll*(need-i)*(2ll*(i*m-m+x)*m + 1ll*(need-i-1ll)*m*m)/2ll;
        if(i == 1) ans = 0ll+prev+curr+after;
        else ans = min(ans, 0ll+prev+curr+after);
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