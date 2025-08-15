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

int dp[101][101][2][2];

bool fun(int even, int odd, int p, int i)
{
	if(!even && !odd) return p;
	if(dp[even][odd][p][i] != -1) return dp[even][odd][p][i];

	int &ans = dp[even][odd][p][i];
	if(!even) return ans = fun(even, odd-1, i ? p : p^1 ,i^1);
	if(!odd) return ans = fun(even-1, odd, p, i^1);

	if(i) return ans = max(fun(even, odd-1, p, i^1), fun(even-1, odd, p, i^1));
	else return ans = min(fun(even, odd-1, p^1, i^1), fun(even-1, odd, p, i^1));
}

void solve()
{
	memset(dp, -1, sizeof(dp));
	int n; cin >> n;
	int even = 0, odd = 0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x%2 == 0) even++;
		else odd++;
	}
	cout << (fun(even, odd, 0, 0) == 0 ? "Alice" : "Bob") << "\n";
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