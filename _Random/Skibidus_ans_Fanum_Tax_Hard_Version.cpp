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
    int n, m; cin >> n >> m;
    vll a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(b.begin(), b.end());
	if(b[m-1]-a[n-1] > a[n-1]) a[n-1] = b[m-1]-a[n-1];

    for(int i = n-2; i >= 0; i--)
    {
    	int low = 0, high = m-1, ind = -1;

    	if(a[i] <= a[i+1])
    	{
    		while(low <= high)
    		{
    			int mid = low+(high-low)/2;

    			if(b[mid]-a[i] <= a[i]) low = mid+1;
    			else
    			{
    				if(b[mid]-a[i] <= a[i+1])
    				{
    					ind = mid;
    					low = mid+1;
    				}
    				else high = mid-1;
    			}
    		}
    		if(ind != -1)
    		{
    			a[i] = b[ind]-a[i];
    		}
    		continue;
    	}

    	
    	while(low <= high)
    	{
    		int mid = low+(high-low)/2;
    		if(b[mid]-a[i] <= a[i+1])
    		{
    			ind = mid;
    			low = mid+1;
    		}
    		else
    		{
    			high = mid-1;
    		}
    	}
    	// cout << i << " " << ind << "\n";
    	if(ind == -1 && a[i] > a[i+1])
    	{
    		no;
    		return;
    	}
    	a[i] = b[ind]-a[i];
    }
    yes;
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