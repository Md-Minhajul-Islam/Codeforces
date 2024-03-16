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
    vii v(n+1); 
    for(int i = 1; i <= n; i++) cin >> v[i];
    reverse(v.begin(), v.end());
    vii ans;
    for(int i = 1; i <= n; i++)
    {
        int l = i, r = n;
        int x;
        while(l <= r)
        {
            int m = l+(r-l)/2;
            if(v[m-1] >= m-i+1)
            {
                l = m+1;
                x = m;
            }
            else r = m-1;
        }
        ans.pb(x-i+1);
    }
    for(int i = n-1; i >= 0; i--) cout << ans[i] << ' ';
    cout << '\n';
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