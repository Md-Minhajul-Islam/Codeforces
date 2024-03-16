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
    vii v;
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
            {
                v.pb(i);
                n /= i;
            }
        }
    }
    if(n > 1) v.pb(n);
    int x, y, z, f; x = y = z = f = 1;
    for(auto i: v)
    {
        if(x == 1) x *= i;
        else if(y == 1 || f)
        {
            y *= i;
            if(x != y) f = 0;
        }
        else z *= i;
    }
    if(x == 1 || y == 1 || z == 1 || x == y || x == z || y == z) cout << "NO\n";
    else cout << "YES\n" << x << ' ' << y << ' ' << z << '\n';
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