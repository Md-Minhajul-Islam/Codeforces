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
    ll a[n+1], b[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    ll dif[n+1];
    ll mx = -1e18;
    for(int i = 1; i <= n; i++)
    {
        dif[i] = a[i]-b[i];
        mx = max(mx, dif[i]);
    }
    vii ans;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(dif[i] == mx)
        {
            cnt++;
            ans.pb(i);
        }
    }
    cout << cnt << '\n';
    for(auto &x: ans) cout << x << ' ';
    cout << '\n';
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