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
    int n, x, m; cin >> n >> x >> m;
    int i = 0, j = 0, f = 0;
    while(m--)
    {
        int l, r; cin >> l >> r;
        if(f)
        {
            if(i <= l && j >= r) continue;
            else if(l <= i && r >= j) i = l, j = r;
            else if(l <= i && r >= i) i = l;
            else if(l <= j && r >= j) j = r;
        }
        else if(l <= x && r >= x)
        {
            f = 1;
            i = l, j = r;
        }
        // cout << i << ' ' << j << '\n';
    }
    cout << j-i+1 << '\n';
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