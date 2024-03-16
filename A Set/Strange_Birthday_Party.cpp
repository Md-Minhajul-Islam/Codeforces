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
    int a[n+1]; ll b[m+1];
    a[0] = INT_MAX;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];
    sort(a, a+n+1);
    reverse(a, a+n+1);
    ll cost = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i <= a[i]) cost += b[i];
        else cost += b[a[i]];
    }
    cout << cost << '\n';
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