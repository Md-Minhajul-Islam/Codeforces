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
    vll a(n), b(n);
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;

    ll ans = 0, mn1, mn2, mn3, mn4;
	mn1 = mn2 = mn3 = mn4 = 1e10;
	for(int i = 0; i < n; i++){
		mn1 = min(mn1, abs(a[0]-b[i]));
		mn2 = min(mn2, abs(a[n-1]-b[i]));
		mn3 = min(mn3, abs(b[0]-a[i]));
		mn4 = min(mn4, abs(b[n-1]-a[i]));
	}
	ll op1 = mn1 + mn2 + mn3 + mn4;
	ll op2 = op1-mn1-mn3+abs(a[0]-b[0]);
	ll op3 = op1-mn1-mn4+abs(a[0]-b[n-1]);
	ll op4 = op1-mn2-mn4+abs(a[n-1]-b[n-1]);
	ll op5 = op1-mn2-mn3+abs(a[n-1]-b[0]);
	ll op6 = abs(a[0]-b[0])+abs(a[n-1]-b[n-1]);
	ll op7 = abs(a[0]-b[n-1])+abs(b[0]-a[n-1]);

	cout << min({op1, op2, op3, op4, op5, op6, op7}) << "\n";
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