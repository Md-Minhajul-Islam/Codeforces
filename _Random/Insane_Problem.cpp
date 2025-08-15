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
    ll k, l1, l2, r1, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    vll a;
    ll n = k;
    for(int i = 0; i <= 35; i++)
    {
    	if(n <= r2)
    	{
    		a.pb(n);
    	}
    	n = 1ll*n*k;
    	if(n > r2) break;
    }

    vector<pll > ans; ll cnt = 0;

    if(r1 < l2 || l1 > r2) cnt = 0;
    else if(l1 <= l2 && r2 <= r1) cnt += r2-l2+1;
    else if(l2 <= l1 && r1 <= r2) cnt += r1-l1+1;
    else if(l1 <= l2 && r1 <= r2) cnt += r1-l2+1;
    else if(l1 >= l2 && r1 >= r2) cnt += r2-l1+1;

    for(int i = 0; i < a.size(); i++)
    {
    	ll low = l1, high = r1, lb = 1e10, hb = -1;
    	while(low <= high)
    	{
    		ll mid = low+(high-low)/2ll;
    		// cout << mid << "\n";
    		if(1ll*mid*a[i] < l2)
    		{
    			low = mid+1;
    		}
    		else if(1ll*mid*a[i] > r2)
    		{
    			high = mid-1;
    		}
    		else
    		{
    			hb = mid;
    			low = mid+1;
    		}
    	}
    	// cout << i << " " << a[i] << " " << hb << "\n";
    	low = l1, high = r1;
    	while(low <= high)
    	{
    		ll mid = low+(high-low)/2ll;
    		if(1ll*mid*a[i] < l2)
    		{
    			low = mid+1;
    		}
    		else if(1ll*mid*a[i] > r2)
    		{
    			high = mid-1;
    		}
    		else
    		{
    			lb = mid;
    			high = mid-1;
    		}
    	}
    	// cout << i << " " << lb << " " << hb << "\n";
    	if(lb <= hb) cnt += hb-lb+1;
    }
   
    cout << cnt << '\n';
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