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
    set<int> s;
    vii a[n];
    for(int i = 0; i < n; i++)
    {
        int m; cin >> m;
        for(int j = 0; j < m; j++)
        {
            int x; cin >> x;
            a[i].pb(x);
            s.insert(x);
        }
    }
    int mx = 0;
    for(auto &x: s)
    {
        set<int> s2;
        for(int i = 0; i < n; i++)
        {
            bool f = 1;
            set<int> st;
            for(auto &u: a[i])
            {
                if(u == x)
                {
                    f = 0;
                    break;
                }
                st.insert(u);
            }
            if(f)
            {
                for(auto &u: st) s2.insert(u);
            }
        }
        int tot = s2.size();
        mx = max(mx, tot);
    }
    cout << mx << '\n';
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