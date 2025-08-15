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

    vii a(n), b(n), c(n), m1(n+2), m2(n+2);
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	m1[a[i]] = i;
    }
    for(int i = 0; i < n; i++)
    {
    	cin >> b[i];
    	m2[b[i]] = i;
    }
    for(int i = 0; i < n; i++) cin >> c[i];

    vii vis(n);
    for(int i = 0; i < n; i++)
    {
    	if(vis[i]) continue;
    	if(a[i] == b[i] || c[i])
    	{
    		int ind = i;
    		while(vis[ind] == 0){
    			vis[ind] = 1;
    			ind = m2[a[ind]];
    		}
    	}
    }
    ll ans = 1;
	ll mod = 1e9+7;
	
    for(int i = 0; i < n; i++)
    {
    	if(vis[i]) continue;

		ans *= 2ll;
		ans %= mod;

		int ind = i;
		while(vis[ind] == 0){
			vis[ind] = 1;
			ind = m2[a[ind]];
		}
    	    	
    }
    cout << ans << "\n";
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