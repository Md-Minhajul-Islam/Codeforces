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
    ll n; cin >> n;
    ll ans;
    ll l = 1, r = 2e10;
    ll sum;
    while(l <= r)
    {
        ll m = l+(r-l)/2;
        ll sum2 = (m+1)*m/2;
        ll sum3 = (m+2)*(m+1)/2;
        if(sum2 <= n && sum3 > n)
        {
            sum = sum2;
            ans = m;
            break;
        }
        if(sum2 <= n) l = m+1;
        else r = m-1;
    }
    cout << ans+1+(n-sum) << '\n';
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