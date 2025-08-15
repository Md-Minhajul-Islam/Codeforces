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
    ll x, y, z, c; cin >> x >> y >> z >> c;

    if(x == y){
    	cout << 0 << "\n";
    	return;
    }

    ll ans = c;
    if(x < y) swap(x, y);

    if(__gcd(x, z) == y*z/__gcd(y, z))
    {
    	cout << ans << "\n";
    	return;
    }
    
    vll div;
    for(ll i = 1; 1ll*i*i <= x; i++)
    {
    	if(x%i == 0)
    	{
    		div.pb(i);
    		if(i != x/i) div.pb(x/i);
    	}
    }
    int sz = div.size();
    ll op = c;
    for(int i = 0; i < sz; i++)
    {
    	if(__gcd(x, div[i]) == y*div[i]/__gcd(y, div[i]))
    	{
    		op = min(op, abs(z-div[i]));
    	}
    }
   	cout << ans+op << "\n";

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