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
    int a[n][m];
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < m; j++) cin >> a[i][j], mx= max(mx, a[i][j]);
    }
	int tot_mx = 0;
	for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < m; j++) tot_mx += (a[i][j] == mx);
    }

	int row_mx[n], col_mx[m];
	for(int i = 0; i < n; i++)
	{
		int cnt = 0;
		for(int j = 0; j < m; j++){
			cnt += (a[i][j] == mx);
		}
		row_mx[i] = cnt;
	}
	for(int i = 0; i < m; i++)
	{
		int cnt = 0;
		for(int j = 0; j < n; j++){
			cnt += (a[j][i] == mx);
		}
		col_mx[i] = cnt;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			int curr = row_mx[i]+col_mx[j];
			curr -= (a[i][j] == mx);
			if(curr == tot_mx){
				cout << mx-1 << "\n";
				return;
			}
		}
	}
	cout << mx << "\n";
	
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