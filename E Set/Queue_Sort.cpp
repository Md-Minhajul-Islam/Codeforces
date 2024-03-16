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
    int n; cin >> n; int a[n];
    int mn = INT_MAX, ind;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < mn)
        {
            mn = a[i];
            ind = i;
        }
    }
    bool f = 1;
    for(int i = ind; i < n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            f = 0; 
            break;
        }
    }
    if(f) cout << ind << '\n';
    else cout << -1 << '\n';
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