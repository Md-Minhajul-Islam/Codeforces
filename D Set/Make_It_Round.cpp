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
    ll n, m; cin >> n >> m;
    ll cnt2 = 0, cnt5 = 0;
    ll x; x = n;
    while(x%2 == 0)
    {
        x /= 2;
        cnt2++;
    }
    while(x%5 == 0)
    {
        x /= 5;
        cnt5++;
    }
    ll k = 1ll;
    while(cnt2 < cnt5 && k*2 <= m) k *= 2, cnt2++;
    while(cnt5 < cnt2 && k*5 <= m) k *= 5, cnt5++;
    while(k*10 <= m) k *= 10;
    if(m/k) k *= (m/k);
    cout << n*k << '\n';
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