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
    int n; cin >> n; ll a[n+1], b[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        b[x] = i;
    }
    int fine = 0, j = 0;
    for(int i = 1; i <= n; i++)
    {
        if(b[a[i]] < j) continue;
        fine += b[a[i]]-j-1;
        j = b[a[i]];
    }
    cout << fine << '\n';    
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