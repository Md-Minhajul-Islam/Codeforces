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
const ll INF = 1e18;

void solve()
{
    int n; cin >> n;
    vll a(n);
    for(auto &x: a) cin >> x;
    sort(a.begin(), a.end());
	int i = 0;
	ll x1, y1, x2, y2, x3, y3, x4, y4;
	x1 = y1 = x2 = y2 = x3 = y3 = x4 = y4 = INF;
	while(i < n-1)
	{
		if(a[i] == a[i+1]){
			x1 = x2 = a[i];
			i += 2;
			break;
		}
		i++;
	}
	while(i < n-1)
	{
		if(a[i] == a[i+1])
		{
			y2 = y3 = a[i];
			i += 2;
			break;
		}
		i++;
	}
	int j = n-1;
	while(j > i)
	{
		if(a[j] == a[j-1])
		{
			y1 = y4 = a[j];
			j -= 2;
			break;
		}
		j--;
	}
	while(j > i)
	{
		if(a[j] == a[j-1])
		{
			x3 = x4 = a[j];
			j -= 2;
			break;
		}
		j--;
	}
	if(x1 == INF || x2 == INF || x3 == INF || x4 == INF || y1 == INF || y2 == INF || y3 == INF || y4 == INF)
		no;
	else
	{
		yes;
		cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << " " << x4 << " " << y4 << "\n";
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