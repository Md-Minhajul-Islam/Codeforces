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
    int n, x, y; cin >> n >> x >> y;
    
    vii mex(n+1, -1);
    int i = x == n ? 1 : x+1, f = 0;
    while(mex[i] == -1)
    {
    	mex[i] = f;
    	f ^= 1;
    	i = i == n ? 1 : i+1;
    }
    if(n%2  || (y-x)%2 == 0) mex[x] = 2;
    for(int i = 1; i <= n; i++) cout << mex[i] << " \n"[i==n];
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