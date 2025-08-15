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
    ll x; cin >> x;

    vll div;
    for(ll i = 1; i*i <= x; i++)
    {
    	if(x%i == 0)
    	{
    		div.pb(i);
    		if(i != x/i) div.pb(x/i);
    	}
    }
    sort(div.begin(), div.end(), greater<>());
    pll ans;
    for(int i = 0; i < div.size(); i++)
    {
    	for(int j = i; j < div.size(); j++)
    	{
    		if(1ll*div[i]*div[j]/__gcd(div[i], div[j]) == x)
    		{
    			ans = {div[j], div[i]};
    			break;
    		}
    	}
    }
    cout << ans.fi << " " << ans.se << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t_case; cin >> t_case;
    // for(test_case = 1; test_case <= t_case; test_case++)
    // {
        solve();
    // }
    return 0;
}