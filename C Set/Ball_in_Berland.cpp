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
    int a, b, k; cin >> a >> b >> k;
    vii boy(a+1, 0), girl(b+1, 0);
    vector<pii> v(k+1);
    for(int i = 1; i <= k; i++)
    {
        cin >> v[i].fi;
        boy[v[i].fi]++;
    }
    for(int i = 1; i <= k; i++)
    {
        cin >> v[i].se;
        girl[v[i].se]++;
    }
    ll ans = 0;
    for(ll i = 1, x = k; i <= k; i++, x--)
    {
        ans += x-boy[v[i].fi]-girl[v[i].se]+1;
        boy[v[i].fi]--;
        girl[v[i].se]--; 
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