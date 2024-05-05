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
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            char c; cin >> c;
            a[i][j] = c-48;
        }
    }
    int ans = 0;
    int span = n-1, i = 1, j = n;
    for(int lyr = 1; lyr <= n/2; lyr++)
    {
        vii p, q, r, s;
        for(int k = i, l = 1; l <= span; l++, k++)
           p.pb(a[i][k]), q.pb(a[k][j]);
        for(int k = j, l = 1; l <= span; l++, k--)
           r.pb(a[j][k]), s.pb(a[k][i]);
        int sum = 0;
        for(int l = 0; l < span; l++)
        {
            sum = p[l]+q[l]+r[l]+s[l];
            ans += min(4 - sum, sum);
        }
        span -= 2;
        i++, j--;
        
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