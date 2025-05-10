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
    int H, M; cin >> H >> M;
    string s; cin >> s;
    int h = (s[0]-'0')*10+(s[1]-'0');
    int m = (s[3]-'0')*10+(s[4]-'0');

    map<int, int> mp;
    mp[0] = 0, mp[1] = 1, mp[2] = 5, mp[5] = 2, mp[8] = 8;
    mp[3] = mp[4] = mp[6] = mp[7] = mp[9] = -1;

    while(1)
    {
    	int h1, h2, m1, m2;
    	h1 = h/10, h2 = h%10;
    	m1 = m/10, m2 = m%10;

    	if(mp[h1] != -1 && mp[h2] != -1 && mp[m1] != -1 && mp[m2] != -1 && mp[m2]*10+mp[m1] < H && mp[h2]*10+mp[h1] < M)
    	{
    		cout << h1 << h2 << ":" << m1 << m2 << "\n";
    		break;
    	}

    	++m;
    	if(m == M) m = 0, ++h;
    	if(h == H) h = 0;
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