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

int sz = 100000;

vii prime;
vector<bool> mark(sz);

void precal()
{
	mark[0] = mark[1] = 1; 
	
	for(ll i = 2; i < sz; i++)
	{
		if(mark[i] == 0)
		{
			prime.pb(i);
			for(ll j = i*i; j < sz; j += i)
				mark[j] = 1;
		}
	}
}

void solve()
{
    int n; cin >> n;
    map<int, int> m;
    bool f = 0;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	if(f == 0)
    	{
    		for(int j = 0; j < prime.size() && prime[j]*prime[j] <= x; j++)
    		{
    			if(x%prime[j] == 0)
    			{
    				while(x%prime[j] == 0) x /= prime[j];
    				m[prime[j]]++;
    				if(m[prime[j]] >= 2)
    				{
    					f = 1;
    					break;
    				}
    			}
    		}
    		if(x != 1)
    		{
    			m[x]++;
    			if(m[x] >= 2) f = 1;
    		}
    	}
    }
    if(f) yes;
    else no;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    precal();

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}