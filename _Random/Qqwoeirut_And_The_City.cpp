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
    vll a(n);
    for(auto &x: a) cin >> x;

    vll even(n), odd(n);
    for(int i = 1; i < n-1; i++)
    {
        ll x = max(a[i-1], a[i+1])-a[i]+1ll;
        if(x > 0) i%2 ? even[i] = x : odd[i] = x;
    }
    for(int i = 1; i < n; i++)
    {
        even[i] += even[i-1];
        odd[i] += odd[i-1];
    }
    if(n%2)
    {
        cout << even[n-1] << "\n";
        return;
    }
    ll ans = odd[n-1];
    for(int i = 1; i < n-1; i++)
    {
        if(i%2)
            ans = min(ans, even[i]+odd[n-1]-odd[i+2]);
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