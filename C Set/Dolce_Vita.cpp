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
    ll n, k; cin >> n >> k;
    ll a[n+1]; a[0] = 0;
    ll sum = 0; int j = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n+1);
    for(int i = 1; i <= n && sum+a[i] <= k; i++) 
    {
        sum += a[i], j = i;
    }
    ll ans = j, p = 1;;
    while(j > 0)
    {
        ll x = (ll)(k-sum-p*j+j)/j;
        ans += j*x;
        sum -= a[j];
        j--;
        p += x;
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