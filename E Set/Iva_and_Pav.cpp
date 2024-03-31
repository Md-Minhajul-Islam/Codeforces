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
    int pref[n+1][32];
    for(int i = 0; i < 32; i++) pref[0][i] = 0;
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        for(int j = 0; j < 32; j++)
        {
            if((1<<j)&x) pref[i][j] = pref[i-1][j]+1;
            else pref[i][j] = pref[i-1][j];
        }
    }
    int q; cin >> q;
    while(q--)
    {
        int l, k; cin >> l >> k;
        int low = l, high = n;
        int ans = -1;;
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            ll num = 0;
            for(int i = 0; i < 32; i++)
            {
                if(pref[mid][i]-pref[l-1][i] == mid-l+1) 
                    num += (1<<i);
            }
            if(num >= k)
            {
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        cout << ans << ' ';
    }
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