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
    bool a[n+1], b[n+1];
    for(int i = 1; i <= n; i++)
    {
        char c; cin >> c;
        a[i] = (c=='0')?false:true;
    }
    for(int i = 1; i <= n; i++)
    {
        char c; cin >> c;
        b[i] = (c=='0')?false:true;
    }
    int pref0[n+1], pref1[n+1];
    pref0[0] = pref1[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        pref0[i] = pref0[i-1]+(a[i]==0);
        pref1[i] = pref1[i-1]+(a[i]==1);
    }
    int cnt = 0;
    for(int i = n; i >= 1; i--)
    {
        if(cnt%2) a[i] = !a[i];
        if(a[i] == b[i]) continue;
        if(pref0[i] != pref1[i])
        {
            cout << "NO\n";
            return;
        }
        cnt++;
    }
    cout << "YES\n";
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