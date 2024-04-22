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
    int n, k; cin >> n >> k;
    vii a[k+1];
    for(int i = 1, x; i <= n; i++)
        cin >> x, a[x].pb(i);
    int ans = n;
    for(int i = 1; i <= k; i++)
    {
        if(a[i].size() == 0) continue;
        vii v;
        for(int j = 0; j < a[i].size()-1; j++)
            v.pb(a[i][j+1]-a[i][j]-1);
        v.pb(a[i][0] - 1);
        v.pb(n - a[i][a[i].size()-1]);
        sort(v.begin(), v.end());
        v[v.size()-1] = v[v.size()-1]/2;
        sort(v.begin(), v.end());
        ans = min(ans, v[v.size()-1]);
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