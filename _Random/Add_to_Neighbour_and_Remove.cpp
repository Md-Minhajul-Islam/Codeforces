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
    vii a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = n, target = 0;
	for(int i = 0; i < n; i++)
	{
		target += a[i];
		if(i == n-2 && target != a[n-1])
		{
			ans = min(ans, n-1);
			break;
		}
		int cnt = i, j = i+1, sum = 0;
		while(j < n && sum+a[j] <= target)
		{
			cnt += (sum != 0);
			sum += a[j];
			if(sum == target) sum = 0;
			j++;
		}

		if(j == n && sum == 0) ans = min(ans, cnt);
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