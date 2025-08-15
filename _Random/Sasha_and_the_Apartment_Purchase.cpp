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
    int n, k; cin >> n >> k;
    vii a(n);

    for(auto &x: a) cin >> x;
    sort(a.begin(), a.end());

    int mn = INT_MAX, mx = 0;
	for(int i = 0; i < n; i++)
	{
		if(abs(i-(n-1-i)) <= k+1){
			mn = min(mn, a[i]);
			mx = max(mx, a[i]);
		}
	}
	cout << mx-mn+1 << "\n";
    
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