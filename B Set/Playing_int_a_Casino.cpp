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
    int n, m; cin >>n >> m;
    vector<ll> a[m+1];
    for(int i = 0; i <= m; i++) a[i].pb(0);
    for(int i = 1; i <= n; i++)
    {
        vector<ll> v(m+1);
        for(int j = 1; j <= m; j++) cin >> v[j]; 
        for(int j = 1; j <= m; j++) a[j].pb(v[j]);
    }
    for(int i = 1; i <= m; i++)
        sort(a[i].begin(), a[i].end());
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++) a[i][j] += a[i][j-1];
    ll ans = 0;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            ans += abs(j*(a[i][j]-a[i][j-1])-a[i][j]);
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