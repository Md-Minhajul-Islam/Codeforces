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
    int n, m, k; cin >> n >> m >> k;

    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    int mat[n+2][m+2];
	memset(mat, 0, sizeof(mat));
	int tot_gold = 0;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(s[i][j] == 'g') mat[i+1][j+1] = 1, tot_gold++;
		}
	}
	int sum[n+2][m+2];
	memset(sum, 0, sizeof(sum));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++){
			sum[i][j] = sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+mat[i][j];
		}
	}

    int loss = n*m;
    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= m; j++)
    	{
    		if(s[i-1][j-1] == '.')
    		{
    			int a = max(1, i-k+1), b = max(1, j-k+1);
    			int c = min(n, i+k-1), d = min(m, j+k-1);
    			loss = min(loss, sum[c][d]-sum[a-1][d]-sum[c][b-1]+sum[a-1][b-1]);
    		}
    	}

    }

    cout << tot_gold-loss << "\n";
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