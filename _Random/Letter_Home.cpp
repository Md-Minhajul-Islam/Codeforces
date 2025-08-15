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
    int n, s; cin >> n >> s;
    vii a(n);
    for(auto &x: a) cin >> x;
    if(a[0] >= s) cout << a[n-1]-s << "\n";
	else if(a[n-1] <= s) cout << s-a[0] << "\n";
	else cout << a[n-1]-a[0]+min(abs(a[0]-s), abs(a[n-1]-s)) << "\n";
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