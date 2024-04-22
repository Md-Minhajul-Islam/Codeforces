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
    int n, m; cin >> n >> m;
    int a[n+1];
    for(int i = 1; i <= n; i++) a[i] = n;
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        if(u > v) swap(u, v);
        a[u] = min(a[u], v-1);
    }
    for(int i = n-1; i; i--)
    {
        a[i] = min(a[i], a[i+1]);
    }
    ll ans = n;
    for(int i = 1; i <= n; i++)
    {
        ans += a[i]-i;
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