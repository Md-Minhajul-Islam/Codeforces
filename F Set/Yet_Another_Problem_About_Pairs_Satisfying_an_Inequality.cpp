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
    vii ind, val;
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if(x < i)
        {
            ind.pb(i);
            val.pb(x);
        }
    }
    sort(val.begin(), val.end());
    ll ans = 0;
    for(auto i: ind)
    {
        int l = 0, r = val.size()-1;
        ll j = val.size();
        while(l <= r)
        {
            int m = l+(r-l)/2;
            if(val[m] > i)
            {
                j = m*1ll;
                r = m-1;
            }
            else l = m+1;
        }
        ans += (val.size()-1)*1ll-j+1;
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