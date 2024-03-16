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
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            int x = n/i;
            cout << x << ' ' << n-x << '\n';
            return;
        }
    }
    cout << 1 << ' ' << n-1 << '\n';
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