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
    int a, b, x, y; cin >> a >> b >> x >> y;

    if(a == b)
    {
    	cout << "0\n";
    	return;
    }
    if(a > b)
    {
    	if(a%2 && a-1 == b)
    	{
    		cout << y << "\n";
    	}
    	else
    	{
    		cout << "-1\n";
    	}
    	return;
    }
    if(x <= y)
    {
    	cout << (b-a)*x << "\n";
    }
    else
    {
    	int ans = 0;
    	while(a != b)
    	{
    		if(a%2 == 0)
    		{
    			ans += y;
    		}
    		else
    		{
    			ans += x;
    		}
    		a++;
    	}
    	cout << ans << "\n";
    }

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