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

struct node
{
    ll x, y, z;
};


void solve()
{
    int n; cin >> n;
    ll a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    vector<node> v;
    ll mn = n-1, mx = n;
    ll tem[n+1]; tem[n] = a[n], tem[n-1] = a[n-1];
    for(int i = n-2; i > 0; i--)
    {

        if(a[i] <= a[mn]-a[mx]) tem[i] = a[i];
        else 
        {
            tem[i] = a[mn]-a[mx];
            v.pb({i, mn, mx});
        }
        if(a[i] <= a[mn]) mn = i;
        if(a[i] > a[mx] && i > mn) mx = i;
    }
    for(int i = 1; i < n; i++)
    {
        if(tem[i]  > tem[i+1])
        {
            cout << -1 << '\n';
            return;
        }
    }
    reverse(v.begin(), v.end());
    cout << v.size() << '\n';
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].x << ' ' << v[i].y << ' ' << v[i].z << '\n';
    }
    
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