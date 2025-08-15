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

vii prime(1e6+5);
void precal()
{
	vector<bool> mark(1e6+5);
	for(int i = 2; i <= 1e6; i++)
	{
		if(mark[i] == 0)
		{
			prime[i] = 1;
			if(1ll*i*i <= 1e6)
			{
				for(int j = i*i; j <= 1e6; j += i) mark[j] = 1;
			}
		}
	}
}

void solve()
{
    int n, e; cin >> n >> e;
    vii a(n);
    for(auto &x: a) cin >> x;

    ll ans = 0;
	for(int i = 0; i < n; i++)
	{
		
		if(prime[a[i]] == 0) continue;

		int j = i+e, right = 0, left = 0;
		while(j < n && a[j] == 1) j += e, right++;
		
		j = i-e;
		while(j >= 0 && a[j] == 1) j -= e, left++;

		ans += 1ll*left*(right+1)+right;
	}
	cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precal();

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}