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
    
    int n, s; cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int mx = -1;
    int i = 0, j = 0,  sum = 0;
    while(j < n)
    {
        if(sum+a[j] <= s) sum += a[j], j++;
        else sum-=a[i], i++;
        if(sum == s) mx = max(mx, j-i);
    }
    if(mx == -1) cout << -1 << '\n';
    else cout << n-mx << '\n'; 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; 
    cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}