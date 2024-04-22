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
    ll n, pos = 1, neg = 0, sign = 1; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x < 0) sign *= -1;
        if(sign == -1) neg++;
        else pos++;
    }
    cout << neg*pos << ' ' << n*(n+1)/2-(neg*pos) << '\n';
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