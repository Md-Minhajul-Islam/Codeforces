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
    ll n, x, y; cin >> n >> x >> y;
    ll lcm = x*y/__gcd(x, y);
    ll m = n/lcm;
    ll p = n/x-m;
    ll q = n/y-m;
    ll ans = (n+n-p+1)*p/2-(1+q)*q/2;
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