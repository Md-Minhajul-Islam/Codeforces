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
    if(m == 1) cout << 0 << '\n';
    else if(n >= m) cout << m << '\n';
    else cout << n+1 << '\n';
    int l = m-1, r = m-1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = l; j >= 0; j--)
            cout << j << ' ';
        for(int j = r; j > l; j--)
            cout << j << ' ';
        if(i < m-1) l--;
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