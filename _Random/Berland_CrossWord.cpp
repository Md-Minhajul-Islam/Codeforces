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
    int n, u, r, d, l; cin >> n >> u >> r >> d >> l;

    for(int i = 0; i < 16; i++)
    {
    	int uu = u, rr = r, dd = d, ll = l;

    	if(i & 1) --uu, --ll;
    	if(i & 2) --uu, --rr;
    	if(i & 4) --rr, --dd;
    	if(i & 8) --dd, --ll;

    	if(min({uu, rr, dd, ll}) >= 0 && max({uu, rr, dd, ll}) <= n-2)
    	{
    		yes;
    		return;
    	}
    }
    no;
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