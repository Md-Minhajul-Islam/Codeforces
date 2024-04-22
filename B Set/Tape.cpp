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
    int n, m, k; cin >> n >> m >> k;
    int a[n], seg[n-1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i < n; i++) seg[i-1] = a[i]-a[i-1]-1;
    sort(seg, seg + n - 1);
    ll ans = a[n-1]-a[0]+1;
    for(int i = n-2, j = k; j > 1; j--, i--)
        ans -= seg[i];
    cout << ans << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
       solve();
    return 0;
}