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
    int mn = 1, mx = n;
    int i = 0, j = n-1;
    while(i < j)
    {
        if(a[i] != mn && a[i] != mx && a[j] != mn && a[j] != mx)
        {
            cout << i+1 << ' ' << j+1 << '\n';
            return;
        }
        if(a[i] == mn || a[i] == mx)
        {
            if(a[i] == mn) mn++;
            else mx--;
            i++;
        }
        if(a[j] == mn || a[j] == mx)
        {
            if(a[j] == mn) mn++;
            else mx--;
            j--;
        }
    }
    cout << -1 << '\n';
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