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
    int n; cin >> n;
    vii a;
    a.pb(0);
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	if(x != a.back()) a.pb(x);
    }
    a.pb(0);
    int cnt = 0;
   	for(int i = 1; i < a.size()-1; i++)
   	{
   		if(a[i] > a[i-1] && a[i] > a[i+1]) cnt++;
   	}
    cout << cnt << "\n";

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