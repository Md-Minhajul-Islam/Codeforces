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
    
	vii cnt(1e5+5);
    int cnt2 = 0, cnt4 = 0;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	cnt2 -= cnt[x]/2;
        cnt4 -= cnt[x]/4;
        cnt[x]++;
        cnt2 += cnt[x]/2;
        cnt4 += cnt[x]/4;
    }
    int q; cin >> q;
    while(q--)
    {
    	char sign; int x;
    	cin >> sign >> x;
    	
        cnt2 -= cnt[x]/2;
        cnt4 -= cnt[x]/4;
        cnt[x] += sign == '+' ? 1 : -1;
    	cnt2 += cnt[x]/2;
        cnt4 += cnt[x]/4;

        if(cnt4 >= 1 && cnt2 >= 4) yes;
        else no;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t_case; cin >> t_case;
    // for(test_case = 1; test_case <= t_case; test_case++)
    // {
        solve();
    // }
    return 0;
}