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

vii primes;
void precal()
{
	ll n = 1e7;
	vector<bool> mark(n+5);

	mark[0] = mark[1] = 1;
	for(int i = 2; i <= n; i++)
	{
		if(mark[i] == 0)
		{
			primes.pb(i);
			for(ll j = 1ll*i*i; j <= n; j += i) mark[j] = 1;
		}
	}
}

void solve()
{
    int n; cin >> n;
    
    ll ans = 0;

    for(int i = 1; i <= n; i++)
    {
    	int low = 0, high = primes.size()-1, cnt = 0;
    	while(low <= high)
    	{
    		int mid = low+(high-low)/2;
    		if(1ll*i*primes[mid] <= n)
    		{
    			cnt = mid+1;
    			low = mid+1;
    		}
    		else high = mid -1;
    	}
    	ans += cnt*1ll;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precal();

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}