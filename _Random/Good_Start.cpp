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
    ll w, h, a, b; cin >> w >> h >> a >> b;
    ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    if(x1 == x2)
    {
    	if(abs(y1-y2)%b == 0) yes;
    	else no;
    }
    else if(y1 == y2)
    {
    	if(abs(x1-x2)%a == 0) yes;
    	else no;
    }
    else if(abs(y1-y2)%b == 0 || abs(x1-x2)%a == 0) yes;
    else no;
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