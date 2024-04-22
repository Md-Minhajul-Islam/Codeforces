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
    ll a[n];
    ll mx = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i]%10 == 0 || (mx-a[i]) <= 20) continue;
        if(a[i]%2) a[i] += a[i]%10;
        if(a[i]%10 == 0 || (mx-a[i]) <= 20) continue;
        a[i] = a[i]+ 20*(ll)((mx-a[i])/20);
    }
    map<ll, ll> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= 8; j++)
        {
            m[a[i]]++;
            if(a[i]%10 == 0) break;
            a[i] += a[i]%10;
        }
    }
    for(auto x: m)
    {
        if(x.se == n)
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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