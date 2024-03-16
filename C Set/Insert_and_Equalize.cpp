// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
 
void solve()
{
    int n; cin >> n;
    ll a[n], b[n]; ll mx = -1e18;
    map<ll, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = 1;
        mx = max(mx, a[i]);
    }
    if(n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    for(int i = 0; i < n; i++) b[i] = mx-a[i];
    ll gcd = 0;
    for(int i = 0; i < n; i++) gcd = __gcd(gcd, b[i]);
    // cout << gcd << '\n';
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += b[i] / gcd;
        // cout << b[i] << '-' << ans << '\n';
    }
    ll g = gcd;
    while(true)
    {
        // cout << mx-gcd <<'\n';
        if(mp[mx-gcd] == 0)
        {
            ans += gcd/g;
            // cout << gcd << '-' << g <<  '\n';
            break;
        }
        gcd += g;
    }
    cout << ans << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}