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
    for(auto &x: a) cin >> x;

    int ans = n+5;
	for(int i = 0; i < n; i++)
	{
		if(i+1 < n)
		{
			if(abs(a[i]-a[i+1]) <= 1){
				ans = 0;
				break;
			}
		}
		if(i >= 1)
		{
			int mn = a[i-1], mx = a[i-1];
			for(int j = i-1; j >= 0; j--)
			{
				mn = min(a[j], mn);
				mx = max(a[j], mx);
				if(mn <= a[i] && mx >= a[i]) ans = min(ans, i-j-1);
				if(mn <= a[i]-1 && mx >= a[i]-1) ans = min(ans, i-j-1);
				if(mn <= a[i]+1 && mx >= a[i]+1) ans = min(ans, i-j-1);
			}
		}
		
		if(i < n-1)
		{
			int mn = a[i+1], mx = a[i+1];
			for(int j = i+1; j < n; j++)
			{
				mn = min(a[j], mn);
				mx = max(a[j], mx);
				if(mn <= a[i] && mx >= a[i]) ans = min(ans, j-i-1);
				if(mn <= a[i]-1 && mx >= a[i]-1) ans = min(ans, j-i-1);
				if(mn <= a[i]+1 && mx >= a[i]+1) ans = min(ans, j-i-1);
			}
		}
		// if(ans == 0) cout << i << "\n";
		// cout << ans << "\n";
	}
	if(ans == n+5) cout << "-1\n";
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