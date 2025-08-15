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
    ll n, c, d; cin >> n >> c >> d;
    vll a(n);
    for(auto &x: a) cin >> x;
    sort(a.begin(), a.end(), greater<>());
    ll low = 0, high = d, ans = -1;
	while(low <= high)
	{
		ll mid = low+(high-low)/2;
		queue<pll > q;
		for(int i = 0; i < min(n, mid+1); i++) q.push({a[i], i+1});
		ll coins = 0;
		for(int i = 1; i <= d; i++)
		{
			if(q.front().se > d) break;
			coins += q.front().fi;
			q.push({q.front().fi, q.front().se+mid+1});
			q.pop();
		}

		if(coins >= c)
		{
			ans = mid;
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	if(ans == -1) cout << "Impossible\n";
	else if(ans == d) cout << "Infinity\n";
	else cout << ans << "\n";
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