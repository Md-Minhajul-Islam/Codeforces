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

    vii cnt(n+5);
	for(auto &x: a) cnt[x]++;

	multiset<int> ms;
	for(int i = 1; i <= n; i++) ms.insert(cnt[i]);


	while(*ms.begin()+2 <= *ms.rbegin()-1)
	{
		int low = *ms.begin()+2, high = *ms.rbegin()-1;
		ms.erase(ms.begin());
		ms.erase(--ms.end());
		ms.insert(low);
		ms.insert(high);
	}
	int ans = 0;
	for(auto &x: ms) ans = max(ans, x);
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