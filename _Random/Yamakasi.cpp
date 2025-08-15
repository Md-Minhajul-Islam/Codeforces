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


int test_case;


ll getSum(vll a, ll s)
{
	ll pref = 0, cnt = 0;
	map<ll, ll> m;
	m[0]++;
	for(int i = 0; i < a.size(); i++)
	{
		pref += a[i];
		cnt += m[pref-s];
		m[pref]++;
	}
	return cnt;
}

void solve()
{
    ll n, s, x; cin >> n >> s >> x;
    vll a(n);
    for(auto &x: a) cin >> x;

    vll v;
	ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++)
    {
    	if(a[i] <= x) v.pb(a[i]);

    	if((a[i] > x || i == n-1) && v.size()) sum1 += getSum(v, s); 

    	if(a[i] > x) v.clear();
    }
    v.clear();
    for(int i = 0; i < n; i++)
    {
    	if(a[i] <= x-1) v.pb(a[i]);

    	if((a[i] > x-1 || i == n-1) && v.size()) sum2 += getSum(v, s); 
    	
    	if(a[i] > x-1) v.clear();
    }
    cout << sum1-sum2 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}