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

vll power;
void precal()
{
	ll m = 1;
	ll inf = 1e18;
	while(m <= inf)
	{
		power.pb(m);
		m *= 2ll;
	}
}

void solve()
{
    ll n, l, r, k; cin >> n >> l >> r >> k;

    if(n%2)
    {
    	cout << l << "\n";
    	return;
    }
    for(int i = 0; i < power.size(); i++)
    {
    	if(power[i] > l && power[i] <= r && n > 2)
    	{
    		if(k <= n-2)
    		{
    			cout << l << "\n";
    		}
    		else{
    			cout << power[i] << "\n";
    		}
    		return;
    	}
    }
    cout << "-1\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precal();

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}