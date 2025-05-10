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
    vii row(n+1), col(n+1);
    set<int> free_row, free_col;
    for(int i = 1; i <= n; i++)
    {
    	free_row.insert(i);
    	free_col.insert(i);
    }
    while(q--)
    {
    	int f; cin >> f;
    	int x1, y1; cin >> x1 >> y1;
    	if(f == 1)
    	{
    		row[x1]++; col[y1]++;
    		free_row.erase(x1);
    		free_col.erase(y1);
    	}
    	else if(f == 2)
    	{
    		--row[x1]; --col[y1];
    		if(row[x1] == 0) free_row.insert(x1);
    		if(col[y1] == 0) free_col.insert(y1);
    	}
    	else
    	{
    		int x2, y2; cin >> x2 >> y2;
    		auto ir = free_row.lower_bound(x1);
    		auto ic = free_col.lower_bound(y1);
    		if(ir == free_row.end() || ic == free_col.end()) cout << "Yes\n";
    		else if((ir != free_row.end() && *ir > x2) || (ic != free_col.end() && *ic > y2)) cout << "Yes\n";
    		else  cout << "No\n";
    	}

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

    // int t_case; cin >> t_case;
    // for(test_case = 1; test_case <= t_case; test_case++)
    // {
        solve();
    // }
    return 0;
}