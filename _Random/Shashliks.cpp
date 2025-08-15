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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    if(x > y) swap(a, b), swap(x, y);

    int ans = 0;
    if(k >= a)
    {
    	int m = (k-a)/x+1;
    	ans += m;
    	k -= m*x;
    }

    if(k >= b)
    {
    	int m = (k-b)/y+1;
    	ans += m;
    }
    cout << ans << '\n';
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