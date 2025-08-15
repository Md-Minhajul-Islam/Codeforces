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
    int n, k; cin >> n >> k;
    if(n == 4 && k == 3){
    	cout << "-1\n";
    	return;
    }
    vii a(n);
    for(int i = 0; i < n; i++) a[i] = i;
    if(k == n-1)
    {
    	swap(a[0], a[n-2]);
    	swap(a[3], a[n-2]);
    }
    else swap(a[k], a[0]);
	int l = 0, r = n-1;
	while(l < r)
	{
		cout << a[l] << ' ' << a[r] << "\n";
		l++; r--;
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