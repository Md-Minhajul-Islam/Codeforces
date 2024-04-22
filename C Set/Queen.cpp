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
    int a[n+1], b[n+1];
    for(int i = 0; i <= n; i++) a[i] = b[i] = 1;
    int root;
    for(int i = 1; i <= n; i++)
    {
        int u, c; cin >> u >> c;
        b[i] = c;
        if(u == -1) continue;
        a[u] &= c;
    }
    vii v;
    for(int i = 1; i <= n; i++)
        if(a[i] && b[i]) v.pb(i);
    for(auto x: v) cout << x << ' ';
    if(v.size() == 0) cout << -1;
    cout << '\n';

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int t; cin >> t;
    // while(t--)
    // {
       solve();
    // }
    return 0;
}