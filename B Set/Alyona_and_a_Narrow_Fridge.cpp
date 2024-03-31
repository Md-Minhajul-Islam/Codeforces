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
    int n, h; cin >> n >> h;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    multiset<ll, greater<ll>> m;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        m.insert(a[i]);
        ll sum = 0;
        int j = 1;
        for(auto it = m.begin(); it != m.end(); it++, j++)
        {
            if(j%2) sum += *it;
            if(sum > h) break;
        }
        if(sum <= h) ans = max(ans, i+1);
    }
    cout << ans << '\n';
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