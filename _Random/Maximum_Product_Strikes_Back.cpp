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
   	vector<vii> a;
   	vector<pii> vp;
   	vii v;
   	int l = 0;
   	for(int i = 0; i < n; i++)
   	{
   		int x; cin >> x;
   		if(x == 0)
   		{
   			if(!v.empty())
   			{
   				a.pb(v);
   				vp.pb({l, i-1});
   				v.clear();
   			}
   			l = i+1;
   		}
   		else v.pb(x);
   	}
   	if(!v.empty())
   	{
   		a.pb(v);
   		vp.pb({l, n-1});
   	}

   	int left_rmv = 0, right_rmv = n, mx = 0;
   	for(int j = 0; j < (int)a.size(); j++)
   	{
   		int neg = 0, cnt_of_2 = 0;
   		for(int i = 0; i < a[j].size(); i++)
   		{
   			neg += (a[j][i] < 0);
   			cnt_of_2 += (abs(a[j][i]) == 2);
   		}
   		if(neg%2 == 0) 
   		{
   			if(mx <= cnt_of_2)
   			{
   				mx = cnt_of_2;
   				left_rmv = vp[j].fi;
   				right_rmv = n-1-vp[j].se;
   			}
   		}
   		else
   		{
   			int right_cnt_of_2 = cnt_of_2;
   			int left_cnt_of_2 = cnt_of_2;
   			for(int i = 0; i < a[j].size(); i++)
   			{
   				right_cnt_of_2 -= (abs(a[j][i]) == 2);
   				if(a[j][i] < 0)
   				{
   					if(mx <= right_cnt_of_2)
   					{
   						mx = right_cnt_of_2;
   						left_rmv = vp[j].fi+i+1;
   						right_rmv = n-1-vp[j].se;
   						break;
   					}
   				}
   			}
   			for(int i = a[j].size()-1; i >= 0; i--)
   			{
   				left_cnt_of_2 -= (abs(a[j][i]) == 2);
   				if(a[j][i] < 0)
   				{
   					if(mx <= left_cnt_of_2)
   					{
   						mx = left_cnt_of_2;
   						left_rmv = vp[j].fi;
   						right_rmv = n-vp[j].fi-i;
   						break;
   					}
   				}
   			}
   		}
   	}
   	if(left_rmv+right_rmv >= n) cout << "0 " << n << "\n";
   	else cout << left_rmv <<" " << right_rmv << "\n";
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