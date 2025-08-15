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
ll val;
ll N;
void fun(ll n, ll k, ll cnt)
{

	if(n < k) return;
	if(n&1){
		val += (N+1ll)*cnt/2ll;
		fun(n/2, k, cnt*2ll);
	}
	else{
		fun(n/2, k, cnt*2ll);
	}
}

void solve()
{
    ll k; cin >> N >> k;
    val = 0;
    fun(N, k, 1ll);
    cout << val << "\n";
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