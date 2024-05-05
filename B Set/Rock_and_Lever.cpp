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
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    bool vis[n];
    memset(vis, 0, sizeof(vis));
    ll ans = 0;
    for(int i = 31; i >= 0; i--)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(vis[j]) continue;
            if((a[j]&(1<<i))) cnt++, vis[j] = 1;
        }
        ans += cnt*1ll*(cnt-1)/2;
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