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
    map<ll, ll> m;
    for(int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        m[x]++;
    }
    ll ans = 0, one = 0, two = 0;
    for(auto &x: m)
    {
        if(x.fi == 1) one = x.se;
        if(x.fi == 2) two = x.se;
        if(x.se == 1) continue;
        ans += ((x.se-1)+1)*(x.se-1)/2;
        // cout << x.fi << '-' << x.se << '\n';
    }
    ans += one*two;
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