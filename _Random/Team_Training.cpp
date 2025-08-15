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
    ll n, x; cin >> n >> x;

    vll a(n); 
    for(auto &y: a) cin >> y;

 	sort(a.begin(), a.end());
 	ll ind = n, ans = 0;
    
 	for(int i = 0; i < n; i++)
 	{
 		ll cnt = (x+a[i]-1ll)/a[i];
 		ind = min(ind, i+cnt-1ll);
 		if(ind == i)
 		{
 			ans++;
 			ind = n;
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