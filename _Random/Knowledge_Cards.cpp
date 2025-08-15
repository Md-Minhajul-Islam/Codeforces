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
   	vii ind(k+1);
   	for(int i = 1; i <= k; i++)
   	{
   		int x; cin >> x;
   		ind[x] = i; 
   	}
   	int gt = 0;
   	for(int i = k; i >= 1; i--)
   	{
   		int idx = ind[i];
   		int rem = idx-gt;
   		if(n*m-2 > rem){
   			gt++;
   			continue;
   		}
   		else{
   			cout << "TIDAK\n";
   			return;
   		}
   	}
   	cout << "YA\n";
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