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
   	vii a(n+1);
   	for(int i = 1; i <= n; i++) cin >> a[i];

   	if(n == 1)
   	{
   		yes;
   		return;
   	}
   	if(n == 2)
   	{
   		if(a[1]+a[2] == 3) no;
   		else yes;
   		return;
   	}

   	vii cnt(n+1), cnt1(n+1), cnt2(n+1);
   	cnt1[1] = (a[1] == 1);
   	cnt2[1] = (a[1] == 2);

   	for(int i = 2; i <= n; i++)
   	{
   		cnt1[i] = cnt1[i-1];
   		cnt2[i] = cnt2[i-1];
   		cnt[i] = cnt[i-1];

   		cnt1[i] += (a[i] == 1);
   		cnt2[i] += (a[i] == 2);
   		cnt[i] += (a[i] == a[i-1]);
   	}
   	if(cnt1[n] == cnt2[n])
   	{
   		no;
   		return;
   	}
   	// cout << cnt[n] << "\n";
   	if(cnt[n] <= 1)
   	{
   		yes;
   		return;
   	}


   	for(int i = 2; i < n; i++)
   	{
   		int pref = cnt[i];
   		int suff = cnt[n]-cnt[i]-(a[i]==a[i+1]);
   		suff += (a[1] == a[i+1]);
   		if(pref+suff <= 1)
   		{
   			// cout << i << " " << pref << " " << suff << "\n";
   			yes;
   			return;
   		}
   	}
   	no;
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