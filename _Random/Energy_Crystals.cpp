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
    ll x; cin >> x;
    vll a(3);
    a[0] = 0, a[1] = 0, a[2] = 0;
    int cnt = 0;
    while(a[0] != x)
    {
    	cnt++;
    	a[0] = min(x, min(a[1], a[2])*2ll+1ll);
    	sort(a.begin(), a.end());
    }
    cout << cnt << "\n";
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