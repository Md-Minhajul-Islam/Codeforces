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
    ll n, g, b; cin >> n >> g >> b;
    ll low = n, high = 1e18, ans = 1e18;
    while(low <= high)
    {
    	ll mid = low+(high-low)/2ll;

    	ll x = 1ll*mid/(g+b);
    	ll good = 1ll*x*g, bad = 1ll*x*b;
    	ll rem = mid%(g+b);
    	good += min(g, rem);
    	rem -= min(g, rem);
    	bad += rem;

    	if(good >= (n+1ll)/2ll)
    	{
    		ans = mid;
    		high = mid-1;
    	}
    	else low = mid+1;
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