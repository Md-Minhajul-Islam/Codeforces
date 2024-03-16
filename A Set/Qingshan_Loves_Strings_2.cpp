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
    string s; cin >> s;
    int z = 0, o = 0;
    for(int i = 0; i < n; i++) 
    {
        if(s[i] == '0') z++;
        else o++;
    }
    if(n%2 || z != o) 
    {
        cout << -1 << '\n';
        return;
    }
    int p = 300, i = 0, j = n;
    vii v; bool f = 0;
    while(p--)
    {
        if(s.size() == 2 && s[0] != s[s.size()-1])
        {
            f = 1;
            break;
        }
        if(s.size() == 2) break;
        if(s[0] != s[s.size()-1])
        {
            s = s.substr(1, s.size() - 2);
            i++, j--;
        }
        else if(s[0] == '1')
        {
            s = "01"+s;
            v.pb(i);
            j += 2;
        }
        else
        {
            s += "01";
            v.pb(j);
            j += 2;
        }  
    }
    if(f == 0) cout << -1 << '\n';
    else
    {
        cout << v.size() << '\n';
        for(auto &x: v) cout << x << ' ';
        cout << '\n';
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