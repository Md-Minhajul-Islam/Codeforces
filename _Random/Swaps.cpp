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
    vii a(n), b(n);
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;

    map<int, int> mp;
	int lb = 2;
	for(int i = 0; i < n; i++)
	{
		if(b[i] < lb) continue;
		for(int j = b[i]; j >= lb; j-=2) mp[j] = i;
		lb = b[i]+2;
	}
	int ans = 2*n;
	for(int i = 0; i < n; i++)
	{
		ans = min(ans, i+mp[a[i]+1]);
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