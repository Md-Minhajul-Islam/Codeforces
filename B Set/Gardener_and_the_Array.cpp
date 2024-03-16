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
    vii a[n]; map<int, int> track;
    for(int i = 0; i < n; i++)
    {
        int k; cin >> k;
        for(int j = 0; j < k; j++)
        {
            int x; cin >> x;
            a[i].pb(x);
            track[x]++;
        }
    }
    bool f;
    for(auto &i: a)
    {
        f = 1;
        for(auto &j: i)
        {
            if(track[j] < 2)
            {
                f = 0;
                break;
            }
        }
        if(f) break;
    }
    if(f) cout << "YES\n"; 
    else cout << "NO\n";
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