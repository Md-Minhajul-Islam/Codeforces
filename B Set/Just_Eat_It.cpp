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
    ll a[n]; ll yasser= 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        yasser += a[i];
    }
    ll mx = -1e18;
    ll tot = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(tot+a[i] < tot)
        {
            mx = max(tot, mx);
            if((-1*a[i]) > tot) tot = 0;
            else tot += a[i];
        }
        else tot += a[i];
    }
    mx = max(tot, mx);
    tot = 0;
    for(int i = 1; i < n; i++)
    {
        if(tot + a[i] < tot)
        {
            mx = max(tot, mx);
            if((-1 * a[i]) > tot) tot = 0;
            else tot += a[i];
        } else tot += a[i];
    }
    mx = max(tot, mx);

    if(mx >= yasser) cout << "NO\n";
    else cout << "YES\n";
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