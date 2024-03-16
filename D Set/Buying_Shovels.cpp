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
    int n, k; cin >> n >> k;
    if(k >= n)
    {
        cout << 1 << '\n';
        return;
    }
    int ans = 1;
    for(int i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            int op1 = 1, op2 = 1;
            if(i <= k) op1 = i;
            if(n/i <= k) op2 = n/i;
            ans = max(ans, max(op1, op2));
        }
    }
    cout << n/ans << '\n';
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