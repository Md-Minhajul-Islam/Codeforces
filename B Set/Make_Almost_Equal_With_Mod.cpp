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
    ll a[n];
    bool odd = 0, even = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if((a[i]&1)) odd = 1;
        else even = 1;
    }
    if(odd && even)
    {
        cout << 2 << '\n';
        return;
    }
    ll i = 4;
    while(1)
    {
        set<ll> s;
        for(int j = 0; j < n; j++)
            s.insert((a[j]%i));
        if(s.size() == 2) 
        {
            cout << i << '\n';
            return;
        }
        i *= 2;
    }

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