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
    int k, n; cin >> n >> k;
    ll a[n+1];
    a[0] = 0.0;
    for(int i = 1; i <= n; i++)
    {   
        cin >> a[i];
        a[i] += a[i-1];
    }
    ll week = n-k+1;
    ll tot = 0;
    for(int i = 1; i+k-1 <= n; i++)
    {
        tot += a[i+k-1]-a[i-1];
    }
    double ans = (double)tot/(double)week;
    printf("%lf\n", ans);
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