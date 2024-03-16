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
    ll n, w; cin >> n >> w;
    multiset<ll> s;
    for(int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        s.insert(x);
    }
    ll h=1, wt = w;
    while(!s.empty())
    {
        auto it = s.upper_bound(wt);
        if(it != s.begin())
        {
            it--;
            wt -= *it;
            s.erase(it);
        }
        else
        {
            wt = w;
            h++;
        }
    }
    cout << h << '\n';    
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