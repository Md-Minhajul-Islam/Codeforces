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
    ll n, k; cin >> n >> k;
    ll a[n], h[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> h[i];
    int len = 0;
    ll tot = 0;
    int i = 0, j = 0;
    while(j < n)
    {
        if(i == j)
        {
            if(tot+a[i] <= k)
            {
                tot += a[i]; j++;
                len = max(len, 1);
            }
            else i++, j++;
        }
        else if(h[j-1]%h[j] == 0 && tot+a[j] <= k)
        {
            len = max(len, j-i+1);
            tot += a[j];
            j++;
        }
        else if(h[j-1]%h[j] != 0)
        {
            i = j;
            tot = 0;
        }
        else if(tot+a[j] > k)
        {
            tot -=a[i];
            i++;
        }
    }
    cout << len <<'\n';
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