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
    ll k, x; cin >> k >> x;
    ll tot = k*k;
    ll l = 1, r = 2*k-1;
    ll ans = 0;
    while(l <= r)
    {
        ll m = l+(r-l)/2;
        ll req = 0;
        if(m > k)
        {
            ll n = 2*k-m;
            req = tot-(n*(n+1)/2);
        }
        else req = m*(m-1)/2;

        if(x > req)
        {
            ans = m;
            l = m+1;
        }
        else r = m-1;
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