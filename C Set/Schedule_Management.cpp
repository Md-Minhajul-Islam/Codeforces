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
    int n, m; cin >> n >> m;
    int cnt[n+1];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    int rest = 0;
    int days = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i%3 == 0 && )
        {

        }

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