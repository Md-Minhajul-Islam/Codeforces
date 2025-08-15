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
    int q; cin >> q;
    bool flag1 = 0, flag2 = 0;
    ll cnt1 = 1, cnt2 = 1;
    while(q--)
    {
    	int d, k; cin >> d >> k;
    	string s; cin >> s;

    	if(flag2){
    		yes;
    		continue;
    	}
    	if(d == 1)
    	{
    		ll cnt = 0;
    		for(auto &ch: s){
    			cnt += (ch == 'a');
    			if(!flag1) flag1 = (ch != 'a');
    		}
    		cnt1 += 1ll*cnt*k;
    		if(flag1 || cnt1 >= cnt2) no;
    		else yes;
    	}
    	else {
    		ll cnt = 0;
    		for(auto &ch: s){
    			cnt += (ch == 'a');
    			if(!flag2) flag2 = (ch != 'a');
    		}
    		cnt2 += 1ll*cnt*k;
    		if(flag2 || (!flag1 && cnt1 < cnt2)) yes;
    		else no;
    	}
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