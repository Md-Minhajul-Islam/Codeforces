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

vii prime;
void precal()
{
	vector<bool> mark(5800085);

	for(ll i = 2; i <= 5800080; i++)
	{
		if(mark[i] == 0) prime.pb(i);
		for(ll j = i*i; j <= 5800080; j += i) mark[j] = 1;
	}
}


void solve()
{
    int n; cin >> n;
    vii a(n); for(auto &x: a) cin >> x;
    
    sort(a.begin(), a.end(), greater<>());

    ll cnt = 0, remove = 0;
    for(int i = 0, j = 0; i < n; i++, j++)
    {
    	if(a[i] >= prime[j]){
    		cnt += a[i]-prime[j];
    	}
    	else if(prime[j]-a[i] <= cnt){
    		cnt -= prime[j]-a[i];
    	}
    	else{
    		remove++;
    	}
    }
    cout << remove << "\n";
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