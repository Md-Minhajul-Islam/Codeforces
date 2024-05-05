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

int const INF = 1e9;
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    s = '#'+s;
    ll f[n+1];
    for(int i = 0; i <= n; i++) f[i] = INF;
    ll ans = 0;
    for(ll i = 1; i <= n; i++)
    {
        if(s[i] == '1') continue;
        else
            for(ll j = i; j <= n && s[j] != '1'; j += i)
                f[j] = min(i, f[j]);
    }
    for(ll i = 1; i <= n; i++)
        if(s[i] == '0') ans += f[i];
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