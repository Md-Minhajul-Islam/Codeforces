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
    vii a, b(n+5, 0);
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	b[x]++;
    }
    int mx = 0, mn = 1e9;
    for(int i = 1; i <= n; i++)
    {
    	if(b[i] == 0) continue;
    	mx = max(mx, i);
    	mn = min(mn, i);
    }
    int rem = 0;
    for(int i = mx; i >= mn; i--)
    {
    	if(rem == 0 && b[i]%2 == 0) continue;

    	if(b[i] == 0)
    	{
    		rem += 2;
    	}
    	else
    	{
    		if(rem == 0 && b[i]%2) rem++;
    		else if(rem == 0 && b[i]%2 == 0) continue;
    		else
    		{
    			if(b[i] >= rem) b[i] -= rem, rem = 0;
    			else rem -= b[i], b[i] = 0;

    			if(b[i] == 0) rem += 2;
    			else
    			{
    				if(b[i]%2) rem++;
    				else rem = 0;
    			}
    		}
    	}
    }
    if(rem != 0) no;
    else yes;

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