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
    vll a(n);
    for(auto &x: a) cin >> x;

    ll dif = a[1]-a[0];

    for(int i = 1; i < n-1; i++)
    {
    	if(a[i+1]-a[i] == dif) continue;
    	else{
    		no;
    		return;
    	}
    }


    if((a[0]-1ll*dif)%(n+1ll))
    {
    	no;
    	return;
    }
    ll y = (a[0]-1ll*dif)/(n+1ll);
    ll x = y+dif;

    for(int i = 0; i < n; i++)
    {
    	if((a[i]-1ll*(i+1)*dif)%(n+1ll))
    	{
    		no;
    		return;
    	}
    	ll y1 = (a[i]-1ll*(i+1)*dif)/(n+1ll);
    	ll x1 = y+dif;

    	if(x == x1 && y == y1 && x >= 0 && y >= 0) continue;
    	else{
    		no;
    		return;
    	}
    }

    yes;
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