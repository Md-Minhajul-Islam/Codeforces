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

    vii cnt(6);
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 5) continue;
		cnt[a[i]]++;
		if(cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 && cnt[3] >= 1 && cnt[5] >= 1){
			cout << i+1 << "\n";
			return;
		}
	}
	cout << "0\n";
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