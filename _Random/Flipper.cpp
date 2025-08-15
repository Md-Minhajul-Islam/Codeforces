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
    vii a(n);
    for(auto &x: a) cin >> x;

    if(n == 1)
    {
    	cout << a[0] << "\n";
    	return;
    }

    int target = n;
    if(a[0] == n) target = n-1;
    int ind;
    for(int i = 0; i < n; i++)
    {
    	if(a[i] == target)
    	{
    		ind = i;
    		break;
    	}
    }
    vii ans, arr;
    ans.pb(-1);
    for(int i = ind; i < n; i++) arr.pb(a[i]);
    for(int i = ind-1; i >= 0; i--)
    {
    	vii temp;

    	for(int j = ind-1; j >= i; j--) temp.pb(a[j]);
    	for(int j = 0; j < i; j++) temp.pb(a[j]);

    	vii v;
    	for(auto &x: arr) v.pb(x);
    	for(auto &x: temp) v.pb(x);

    	
    	bool f = 1;
    	for(int i = 0; i < n; i++)
    	{
    		if(ans[i] > v[i]) f = 0;

    		if(ans[i] < v[i] && f)
    		{
    			swap(ans, v);
    			break;
    		}
    	}
    }
    arr.clear();
    for(int i = ind+1; i < n; i++) arr.pb(a[i]);
    for(int i = ind; i >= 0; i--)
    {
    	vii temp;
    	for(int j = ind; j >= i; j--) temp.pb(a[j]);
    	for(int j = 0; j < i; j++) temp.pb(a[j]);

    	vii v;
    	for(auto &x: arr) v.pb(x);
    	for(auto &x: temp) v.pb(x);

    	
    	bool f = 1;
    	for(int i = 0; i < n; i++)
    	{
    		if(ans[i] > v[i]) f = 0;

    		if(ans[i] < v[i] && f)
    		{
    			swap(ans, v);
    			break;
    		}
    	}
    }
    for(auto &x: ans) cout << x << " ";
    	cout << "\n";
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