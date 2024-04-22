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
    for(int i = 1; i <= n; i++) cin >> a[i];
    int dp[n+1];
    for(int i = 0; i <= n; i++) dp[i] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = i*2; j <= n; j += i)
            if(a[i] < a[j]) dp[j] = max(dp[j], dp[i]+1);
    int ans = 0;
    for(int i = 1; i <= n; i++) ans = max(ans, dp[i]);
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