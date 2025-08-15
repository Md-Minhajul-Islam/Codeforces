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
    int n, k; cin >> n >> k;
    vector<pair<int, pair<int, int>>> a;
    for(int i = 0; i < n; i++)
    {
    	int l, r, w; cin >> l >> r >> w;
    	a.pb({l, {r, w}});
    }
    sort(a.begin(), a.end());
    //for(auto &x: a) cout << x.fi << " " << x.se.fi << " " << x.se.se << "\n";
    for(auto &x: a)
    {
    	if(k >= x.fi) k = max(k, x.se.se);
    }
    cout << k << "\n";
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