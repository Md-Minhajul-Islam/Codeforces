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


bool cmp(int a, int b)
{
    return a > b;
}

void solve()
{
    int n; cin >> n;
    int cnt[n+1], vis[n+1];
    for(int i = 0; i <= n; i++) cnt[i] = vis[i] = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    sort(cnt, cnt+n+1, cmp);
    ll ans = 0;
    int j = n;
    for(auto x: cnt)
    {
        if(j <= 0) break;
        if(vis[x] == 0)
        {
            ans += x;
            vis[x] = 1;
            j = x-1;
        }
        else
        {
            ans += j;
            vis[j] = 1;
            j--;
        }
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