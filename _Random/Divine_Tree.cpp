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
    ll n, m; cin >> n >> m;

    ll x = 1ll*n*(n+1ll)/2ll;

    if(m < n || m > x){
    	cout << "-1\n";
    	return;
    }
    vll ans;

    while(2ll*n-1ll < m){
    	ans.pb(n);
    	m -= n;
    	--n;
    }
    for(ll i = 1; i <= n; i++)
    {
    	if(i+n-1ll == m){
    		ans.pb(i);
    		for(ll j = 1; j <= n; j++){
    			if(j != i) ans.pb(j);
    		}
    		break;
    	}
    }
    if(ans.empty()){
    	cout << "-1\n";
    	return;
    }
    int sz = ans.size();
    cout << ans[0] << "\n";
    
    for(int i = 0; i < sz-1; i++)
    {
    	cout << ans[i] << " " << ans[i+1] << "\n";
    }
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