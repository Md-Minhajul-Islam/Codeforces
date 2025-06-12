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
	int a[12];
	a[0] = 0, a[1] = 1, a[2] = 2;
	for(int i = 3; i <= 10; i++) a[i] = a[i-1]+a[i-2]; 


	string s ="";

    int n, m; cin >> n >> m;
    while(m--){
    	int w, l, h; cin >> w >> l >> h;
    	if(w < a[n] || l < a[n] || h < a[n]){
    		s += '0';
    		continue;
    	}
    	if(w >= a[n]+a[n-1] || l >= a[n]+a[n-1] || h >= a[n]+a[n-1]){
    		s += '1';
    	}
    	else{
    		s += '0';
    	}
    }
    cout << s << "\n";
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