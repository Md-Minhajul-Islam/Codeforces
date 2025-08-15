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
    ll n; cin >> n;
    ll you = 0, me = 0, turn = 1;
    while(n)
    {
    	if(turn)
    	{
    		if(n%2 || ((n/2)%2 == 0 && n/2 != 2)) n--, me++;
    		else n /= 2ll, me += n;
    	}
    	else
    	{
    		if(n%2 || ((n/2)%2 == 0 && n/2 != 2)) n--, you++;
    		else n /= 2ll, you += n;
    	}

    	turn = !turn;
    }
    cout << me << "\n";
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