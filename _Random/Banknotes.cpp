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
    ll n, k; cin >> n >> k;
    k += 1;
    vll a(n);
    for(auto &x: a)
    {
    	cin >> x;
    	ll curr = 1ll;
    	while(x--) curr *= 10ll;
    	x = curr;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
    	ll rem = k;
    	if(i+1 < n) rem = min(rem, a[i+1]/a[i]-1);
    	ans += 1ll*a[i]*rem;
    	k -= rem;
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