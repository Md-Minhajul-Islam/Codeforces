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
int tt = 0;
void solve()
{
    tt++;
    int n; cin >> n;
    map<int, int> m;
    bool f = 0;
    for(int i = 1; i <= n*(n-1)/2; i++)
    {
        int x; cin >> x;
        m[x]++;
    }
    vector<pii> v;
    for(auto x: m) v.pb({x.fi, x.se});
    reverse(v.begin(), v.end());
    int a[n];
    a[0] = 1000000000;
    for(int i = 0, j = 1, k = 1; i < v.size(); i++)
    {
        int m = j; k = j; 
        while(m < v[i].se)
        {
            j++;
            m = m+j;
        }
        for(int in = k; in <= j; in++) a[in] = v[i].fi;
        j++;
    }
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
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