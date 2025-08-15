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
    int n, m; cin >> n >> m;
    vii a(m);
    for(auto &x: a) cin >> x;
    sort(a.begin(), a.end());
	
	ll ans = 0;
	for(int i = 1; i < n; i++)
	{
		int cnt1 = a.end()-lower_bound(a.begin(), a.end(), i);
		int cnt2 = a.end()-lower_bound(a.begin(), a.end(), n-i);
		ans += 1ll*cnt1*cnt2-(a.end()-lower_bound(a.begin(), a.end(), max(i, n-i)));

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