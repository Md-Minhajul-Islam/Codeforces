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
    int n; char c; cin >> n >> c;
    int cnt = 0; char temp;
    string s; cin >> s; s = '#'+s;
    for(int i = 1; i <= n; i++)
    {
        if(i == n-1) temp = s[i];
        else if(s[i] != c) cnt++;
    }
    if(cnt == 0 && temp == c) 
        cout << 0 << '\n';
    else if(cnt > 0 && temp == c) 
        cout << 1 << '\n' << n-1 << '\n';
    else if(cnt == 0 && temp != c) cout << 1 << '\n' << n << '\n';
    else
    {
        for(int i = n; i >= 1; i--)
        {
            if(s[i] == c)
            {
                int cn = 0;
                for(int j = i; j <= n; j += i)
                    if(s[j] != c) cn++;
                if(cn == 0)
                {
                    cout << 1 << '\n' << i << '\n';
                    return;
                }
            }       
        }
        cout << 2 << '\n' << n - 1 << ' ' << n << '\n';
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