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
    vii v = {n};
    while(__builtin_popcount(n) > 1)
    {
        n -= (n& -n); // (n & -n) give least significant bit;
        v.pb(n);
    }
    while(n > 1)
    {
        n /= 2;
        v.pb(n);
    }
    cout << v.size() << '\n';
    for(auto &x: v) cout << x << ' ';
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