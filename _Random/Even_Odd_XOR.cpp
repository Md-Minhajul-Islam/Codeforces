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
    for(int i = 0; i < n-3; i++) a[i] = i;
    a[n-3] = (1<<18);
    int xorr = 0;
	for(int i = 0; i < n-2; i++) xorr ^= a[i];
    a[n-2] = (1<<19);
    a[n-1] = a[n-2]^xorr;

    for(int i = 0; i < n; i++) cout << a[i] << " \n"[i+1==n];
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