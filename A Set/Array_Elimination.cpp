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
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt[31] = {0};
    for(int i = 0; i <= 30; i++)
        for(int j = 0; j < n; j++)
            if((a[j]&(1<<i))) cnt[i]++;
    for(int k = 1; k <= n; k++)
    {
        bool f = 1;
        for(int i = 0; i <= 30; i++)
            if(cnt[i] % k != 0) f = 0;
        if(f) cout << k << ' ';
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