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
    vii a(n+1, 0);
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x > n) continue;
        a[x]++;
    }
    int cnt[n+1];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 0) continue; 
        for(int j = i; j <= n; j+=i) cnt[j] += a[i];
    }
    int mx = 0;
    for(int i = 1; i <= n; i++)
    {
        mx = max(mx, cnt[i]);
    }
    cout << mx << '\n';
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