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
    int n, m; cin >> n >> m;
    vll a(m);
    for(auto &x: a) cin >> x;
    sort(a.begin(), a.end());

	ll ans[n][6];
	for(int i = 0; i < 6; i++){
		for(int j = 0, k = 0, l = m-1; j < n; j++){
			if(i%2 == 0)
			{
				if(j < n/2) ans[j][i] = a[k], k++;
				else ans[j][i] = a[l], l--;
			}else{
				if(j < n/2) ans[j][i] = a[l], l--;
				else ans[j][i] = a[k], k++;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 6; j++) cout << ans[i][j] <<" ";
			cout << "\n";
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