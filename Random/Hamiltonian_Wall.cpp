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
    string a[2];
    cin >> a[0] >> a[1];
 
    int vis[2][n]; memset(vis, 0, sizeof(vis));
    vis[0][0] = vis[1][0] = 1;
    int i, j = 0, prev = 0;
    if(a[0][0] == 'B')
    {
        i = 0;
        while(j < n)
        {
            vis[i][j] = 1;
            if(prev == 0)
            {
                if(j+1 < n && a[i][j+1] == 'B') ++j, prev = 1;
                else break;
            }
            else
            {
                if(a[!i][j] == 'B') i = !i, prev = 0;
                else if(j+1 < n && a[i][j+1] == 'B') ++j;
                else break;
            }
        }
        bool f = 1;
        for(int i = 0; i < n; i++)
        {
            if(a[0][i] == 'B' && vis[0][i] == 1) continue;
            if(a[1][i] == 'B' && vis[1][i] == 1) continue;
            else {f = 0; break;}
        }
        if(f)
        {
            yes; return;
        }
    }
    memset(vis, 0, sizeof(vis));
    vis[0][0] = vis[1][0] = 1;
    if(a[1][0] == 'B')
    {
        i = 1, j = 0, prev = 0;
        while(j < n)
        {
            vis[i][j] = 1;
            if(prev == 0)
            {
                if(j+1 < n && a[i][j+1] == 'B') ++j, prev = 1;
                else break;
            }
            else
            {
                if(a[!i][j] == 'B') i = !i, prev = 0;
                else if(j+1 < n && a[i][j+1] == 'B') ++j;
                else break;
            }
        }
        bool f = 1;
        for(int i = 0; i < n; i++)
        {
            if(a[0][i] == 'B' && vis[0][i] == 1) continue;
            if(a[1][i] == 'B' && vis[1][i] == 1) continue;
            else {f = 0; break;}
        }
        if(f)
        {
            yes; return;
        }
    }
    no;
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