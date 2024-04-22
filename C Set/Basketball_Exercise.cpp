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

ll dp[2][100005];

void solve()
{
    int n; cin >> n;
    ll h1[n+1], h2[n+1];
    for(int i = 1; i <= n; i++) cin >> h1[i];
    for(int i = 1; i <= n; i++) cin >> h2[i];
    for(int i = 1; i <= n; i++) 
    {
        dp[0][i] = max(dp[0][i-1], dp[1][i-1]+h1[i]);
        dp[1][i] = max(dp[1][i-1], dp[0][i-1]+h2[i]);
    }
    cout << max(dp[0][n], dp[1][n]) << '\n';    
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