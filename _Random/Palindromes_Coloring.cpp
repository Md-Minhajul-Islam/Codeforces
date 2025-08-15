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
    int k, n; cin >> n >> k;
    string s; cin >> s;

    int even_sum = 0, odd_sum = 0;
    vii cnt(30);
    for(int i = 0; i < n; i++) cnt[s[i]-'a']++;

    for(int i = 0; i < 30; i++)
    {
    	odd_sum += cnt[i]%2;
    	even_sum += (cnt[i]/2)*2;
    }
    int low = 0, high = n, ans = -1;
    while(low <= high)
    {
    	int mid = low+(high-low)/2;

    	int target = mid;
    	if(mid%2) target -= 1;

    	if(1ll*target*k <= even_sum && mid%2 == 0)
    	{
    		ans = mid;
    		low = mid+1;
    	}
    	else if(1ll*target*k <= even_sum && mid%2 && even_sum-1ll*target*k+odd_sum >= k)
    	{
    		ans = mid;
    		low = mid+1;
    	}
    	else high = mid-1;

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