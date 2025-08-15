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

void solve()
{
 	int n; cin >> n;
 	vii a(n);
 	for(auto &x: a) cin >> x;
 	vector<bool> pref(n), suff(n), taken(n);
 	int mx = 0, f = 0;
 	for(int i = 0; i < n; i++)
 	{
 		mx = max(mx, a[i]);
 		if(taken[a[i]]) f = 1;
 		else taken[a[i]] = 1;

 		if(i+1 == mx && f == 0) pref[i] = 1;
 	}  
 	for(int i = 0; i < n; i++) taken[i] = 0;
 	mx = 0, f = 0;
 	for(int i = n-1; i >= 0; i--)
 	{
 		mx = max(mx, a[i]);
 		if(taken[a[i]]) f = 1;
 		else taken[a[i]] = 1;

 		if(n-i == mx && f == 0) suff[i] = 1;
 	}
 	vector<pii > ans;
 	for(int i = 0; i < n-1; i++)
 	{
 		if(pref[i] && suff[i+1]) ans.pb({i+1, n-i-1});
 	}
 	cout << ans.size() << "\n";
 	for(auto &x: ans) cout << x.fi << " " << x.se <<"\n";
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