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

ll fact[200002];

void precal()
{
    fact[0] = 1ll;
    for(ll i = 1; i < 200002; i++)
        fact[i] = (fact[i - 1] * i) % 998244353ll;
}
void solve()
{
    string s; cin >> s;
    vii block;
    int i = 0;
    ll k = 0, w = 1;
    while(i < s.size())
    {
        k++;
        ll len = 1;
        while(i+1 < s.size() && s[i] == s[i+1]) i++, len++;
        w = (w * len) % 998244353ll;
        i++;
    }
    ll ans = (w * fact[(s.size() - k)]) % 998244353ll;
    cout << (s.size()-k) << ' ' << ans << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precal();
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}