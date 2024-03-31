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
    ll a[n];
    ll tot = 0, mx1 = -1, mx2 = -1;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        if(a[i] > mx1) mx2 = mx1, mx1 = a[i];
        else if(a[i] > mx2) mx2 = a[i];
        tot += a[i];
    }
    vii v;
    for(int i = 0; i < n; i++)
    {
        ll rem = tot-a[i];
        if(mx1 == a[i] && rem-mx2 == mx2) v.pb(i+1);
        else if(mx1 != a[i] && rem-mx1 == mx1) v.pb(i + 1);
    }
    cout << v.size() << '\n';
    for(auto x: v) cout << x << ' ';
    cout << '\n';
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