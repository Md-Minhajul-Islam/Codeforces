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

    int ans = 1e9;
    for(char i = 'a'; i <= 'z'; i++)
    {
        int l = 0, r = n-1, cnt = 0, f = 1;
        while(l < r)
        {
            if(s[l] == s[r]) l++, r--;
            else
            {
                if(s[l] == i) cnt++, l++;
                else if(s[r] == i) cnt++, r--;
                else 
                {
                    f = 0; break;
                }
            }
        }
        if(f) ans = min(ans, cnt);
    }
    if(ans == 1e9) cout << -1 << '\n';
    else cout << ans << '\n';
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