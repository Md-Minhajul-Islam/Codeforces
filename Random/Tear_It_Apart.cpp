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
    string s; cin >> s;
    int n = s.size();
    vector<bool> mark(30);
    for(int i = 0; i < n; i++) mark[s[i]-'a'] = 1;
    int ans = 1e9;
    for(int i = 0; i < 26; i++)
    {
    	if(mark[i])
    	{
    		vii a;
    		int cnt = 0;
    		for(int j = 0; j < n; j++)
    		{
    			if(s[j]-'a' == i)
    			{
    				if(cnt) a.pb(cnt);
    				cnt = 0;
    			}
    			else cnt++;
    		}
    		if(cnt) a.pb(cnt);
    		int curr_mx = 0;
    		for(auto &x: a)
    		{
    			int num = x, curr = 0;
    			while(num)
    			{
	    			int y = (num+1ll)/2ll;
	    			curr++;
	    			num -= y;
    			}
    			curr_mx = max(curr, curr_mx);
    		}

    		ans = min(ans, curr_mx);
    	}
    }
    cout << ans << '\n';
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