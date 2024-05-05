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
    int n, q; cin >> n >> q;
    ll prev = 0;
    map<ll, ll> m;
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        sum += x;
        m[i] = x;
    }
    while(q--)
    {
        int opt; cin >> opt;
        if(opt == 1)
        {
            ll ind, val; cin >> ind >> val;
            if(m[ind] == 0)
            {
                sum = sum-prev+val;
                cout << sum << '\n';
                m[ind] = val;
            }
            else
            {
                sum = sum - m[ind] + val;
                cout << sum << '\n';
                m[ind] = val;
            }   
        }
        else 
        {
            ll val; cin >> val;
            sum = val*n;
            cout << sum << '\n';
            prev = val;
            m.clear();
        }
    }
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