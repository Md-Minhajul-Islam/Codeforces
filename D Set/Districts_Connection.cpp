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
    int a[n+1];
    vii v; int flag = -1;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i] == a[1]) v.pb(i);
        else flag = i;
    }
    if(flag == -1)
    {
        cout << "NO\n";return;
    }
    cout <<"YES\n";
    for(int i = 1; i <= n; i++) 
        if(a[i] != a[1]) cout << 1 << ' ' << i << '\n';
    for(int i = 1; i < (int)v.size(); i++)
    {
        cout << flag <<' ' << v[i] << '\n';
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