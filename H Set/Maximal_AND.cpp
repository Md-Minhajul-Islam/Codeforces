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
    ll n, k; cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int bits[36] = {0};
    for(int i = 30; i >= 0; i--)
    {
        int mask = (1<<i);
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if((a[j]&mask) == 0) cnt++;
        }
        if(cnt <= k)
        {
            k -= cnt;
            bits[i] = 1;
        }
    }
    ll ans = 0;
    for(int i = 30; i >= 0; i--)
    {
        if(bits[i] == 1)
        {
            ans += powl(2, i);
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