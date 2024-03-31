// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
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
    vector<pll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].fi >> v[i].se;
    
    auto possible = [&](ll k)
    {
        ll x = 0, y = 0;
        for(auto vp: v)
        {
            x = max(vp.fi, x-k);
            y = min(vp.se, y+k);
            if(x > y) return false;
        }
        return true;
    };

    ll ans, low = 0, high = 1e9;
    while(low <= high)
    {
        ll mid = low+(high-low)/2;
        if(possible(mid)) ans = mid, high = mid-1;
        else low = mid+1;
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