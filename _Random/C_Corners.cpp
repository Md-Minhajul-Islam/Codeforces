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
    vector<vii> a(n, vii(m));
    int ans = 0;
    for(int i = 0; i < n; i++)
    	for(int j = 0; j < m; j++)
    	{
    		char ch; cin >> ch;
    		a[i][j] = ch-'0';
            ans += (a[i][j] == 1);
    	}
    int mx = 0, one_one = 0, two_one = 0, three_one = 0, four_one = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < m-1; j++)
        {
            int cnt = (a[i][j] == 1);
            cnt += (a[i][j+1] == 1);
            cnt += (a[i+1][j] == 1);
            cnt += (a[i+1][j+1] == 1);
            if(cnt == 1) one_one = 1;
            if(cnt == 2) two_one = 1;
            if(cnt == 3) three_one = 1;
            if(cnt == 4) four_one = 1;
        }   
    }
    if(one_one || two_one) cout << ans << "\n";
    else if(three_one) cout << ans-1 <<"\n";
    else if(four_one) cout << ans-2 <<"\n";
    else cout << "0\n";
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