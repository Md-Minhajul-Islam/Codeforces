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
    string s; cin >> s;

    vii cnt(30);
    for(int i = 0; i < n; i++){
    	cnt[s[i]-'a']++;
    }
    for(int i = 1; i < n-1; i++)
    {
    	if(cnt[s[i]-'a'] > 1){
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