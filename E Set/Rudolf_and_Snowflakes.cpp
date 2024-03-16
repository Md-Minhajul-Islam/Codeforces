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
    ll n; cin >> n;

    n -= 1;
    for(ll i = 2; i*i <= n; i++)
    {
        ll x = n, j = i;
        while(x > 0)
        {
            x -= j;
            j *= i;
        }
        if(x == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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