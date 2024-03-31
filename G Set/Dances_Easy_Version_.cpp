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
    int a[n], b[n];
    a[0] = 1;
    for(int i = 1; i < n; i++) cin >> a[i];
    for(int j = 0; j < n; j++) cin >> b[j];
    sort(a, a+n); sort(b, b+n);
    int i = 0, j = 0;
    int cnt = 0;
    while(i < n && j < n)
    {
        if(b[j] > a[i])
        {
            i++, j++;
        }
        else j++, cnt++;
    }
    cout << cnt << '\n';
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