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

    ll ans = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			ll sum = a[i]+a[j];
			int low = j+1, high = n-1, ind = -1;
			while(low <= high)
			{
				int mid = low+(high-low)/2;
				if(sum > a[mid])
				{
					ind = mid;
					low = mid+1;
				}
				else high = mid-1;
			}
			if(ind == -1) continue;
			low = j+1, high = ind; int ind2 = -1;
			while(low <= high)
			{
				int mid = low+(high-low)/2;
				if(sum+a[mid] > a[n-1])
				{
					ind2 = mid;
					high = mid-1;
				}
				else{
					low = mid+1;
				}
			}
			if(ind2 == -1) continue;
			// cout << i+1 << " " << j+1 << "\n";
			ans += 1ll*abs(ind2-ind)+1ll;
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