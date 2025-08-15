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
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	mp[x]++;
    }
    priority_queue<int> pq;
    for(auto &x: mp) pq.push(x.se);
    while(pq.size() > 1)
    {
    	int x = pq.top();
    	pq.pop();
    	int y = pq.top();
    	pq.pop();
    	--x; --y;
    	if(x > 0) pq.push(x);
    	if(y > 0) pq.push(y);
    }
    int ans = pq.empty() ? 0 : pq.top();
    cout << ans << "\n";
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