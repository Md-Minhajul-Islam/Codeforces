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
    int tot = 0;
    string s; cin >> s;
    int len = (int) s.size();

    int cnt_two = 0, cnt_three = 0;
    for(int i = 0; i < len; i++)
    {
    	tot += 1ll*(s[i]-'0');
    	cnt_two += ((s[i]-'0') == 2);
    	cnt_three += ((s[i]-'0') == 3);
    }
   	if(tot%9 == 0)
   	{
   		yes; return;
   	}
   	int rem = (9-tot%9);
   	if(rem == 1 && (cnt_two >= 5 || (cnt_two >= 2 && cnt_three >= 1))) yes;
   	else if(rem == 2 && cnt_two >= 1) yes;
   	else if(rem == 3 && (cnt_two >= 6 || cnt_three >= 2 || (cnt_three >= 1 && cnt_two >= 3))) yes;
   	else if(rem == 4 && cnt_two >= 2) yes;
   	else if(rem == 5 && (cnt_two >= 7 || (cnt_three >= 1 && cnt_two >= 4) || (cnt_three >= 2 && cnt_two >= 1))) yes;
   	else if(rem  == 6 && (cnt_two >= 3 || cnt_three >= 1)) yes;
   	else if(rem == 7 && (cnt_two >= 8 || (cnt_three >= 1 && cnt_two >= 5) || (cnt_three >= 2 && cnt_two >= 2))) yes;
   	else if(rem == 8 && (cnt_two >=  4 || (cnt_two >= 1 && cnt_three >= 1))) yes;
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

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}