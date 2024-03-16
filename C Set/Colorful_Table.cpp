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
    int n, k; cin >> n >> k;
    vii a(n),
    vis(100004, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        vis[a[i]] = 1;
    }
    vii pref, suff;
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        pref.pb(mx);
    }
    mx = 0;
    for(int i = n-1; i >= 0; i--)
    {
        mx = max(mx, a[i]);
        suff.pb(mx);
    }
    for(int i = 1; i <= k; i++)
    {
        if(vis[i] == 0)
        {
            cout << 0 << ' ';
            continue;
        }
        int l, r;
        auto it = lower_bound(pref.begin(), pref.end(), i);
        l = it-pref.begin();
        it = lower_bound(suff.begin(), suff.end(), i);
        r = it-suff.begin();
        r = n-1-r;
        cout << 2*(r-l+1) << ' ';
    }
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