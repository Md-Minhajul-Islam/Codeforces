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
    int a[n+1]; 
    map<int, int> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        m[a[i]-i]++;
    }
    ll ans = 0;
    for(auto x: m)
    {
        ans += 1ll*x.se*(x.se-1)/2;
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