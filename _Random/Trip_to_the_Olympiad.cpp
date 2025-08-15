#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"


int test_case;

void solve()
{
    ll l, r; cin >> l >> r;

    ll a = 0, b = 0, c = 0;
    for(int i = 29; i >= 0; i--)
    {
        if((l&(1ll<<i)) == (r&(1ll<<i)))
        {
            a += l&(1ll<<i);
            c += l&(1ll<<i);
        }
        else
        {
            c += (1ll<<i);
            for(int j = i-1; j >= 0; j--) a += (1ll<<j);
            break;
        }
    }
    if(c-a > 1) b = a+1;
    else if(c+1 <= r) b = c+1;
    else b = a-1;
    cout << a << ' ' << b << ' ' << c << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}