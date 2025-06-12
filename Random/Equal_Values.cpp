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
    vii a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    int l = 1, r = 1;
	ll ans = 1e18+5;
	while(r <= n)
	{
		while(r <= n && a[l] == a[r]) r++;
		ll cal = (l-1ll)*a[l] + (n-r+1ll)*a[l];
		ans = min(ans, cal);
		l = r;
	}
	cout << ans << '\n';
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