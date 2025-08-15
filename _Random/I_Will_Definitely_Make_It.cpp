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
    ll n, k; cin >> n >> k;
    vll h(n);
    for(auto &x: h) cin >> x;
    	
    ll curr_mnt = 0, curr_wtr = 1;
	ll h_curr, temp = h[k-1];
	sort(h.begin(), h.end());
	for(int i = 0; i < n; i++)
	{
		if(temp == h[i]) h_curr = i;
	}

	while(h[h_curr] != h[n-1])
	{
		ll low = h_curr+1, high = n-1, shift = -1;
		while(low <= high)
		{
			ll mid = low+(high-low)/2;
			if(curr_mnt+abs(h[mid]-h[h_curr])-1 <= h[h_curr]- curr_wtr)
			{
				shift = mid;
				low = mid+1;
			}
			else high = mid-1;
		}
		if(shift == -1) break;
		else
		{
			curr_wtr += curr_mnt+abs(h[shift]-h[h_curr]);
			h_curr = shift;
			curr_mnt += curr_mnt+abs(h[shift]-h[h_curr]);
		}
	}
	// cout << h[h_curr] << "\n";
	if(h[h_curr] == h[n-1]) yes;
	else no;
	
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