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
    string s; cin >> s;

    int rem = k, lose = 0;
    char mn = 'z', mx = 'a';
    for(int i = 0; i < n; i++)
    {
    	if(s[i] <= mx) s[i] = min(s[i], mn);
    	else{
    		char ch = s[i]-'a' <= rem ? 'a' : s[i]-rem;
    		if(ch <= mn) mx = s[i], mn = ch, lose = max(lose, (s[i]-ch)), s[i] = ch;
    		else{
    			rem -= lose;
    			ch = s[i]-rem;
    			char temp = s[i];
    			for(int j = i; j < n; j++){
    				if(s[j] > mx && s[j] <= temp) s[j] = min(s[j], ch);
    			}
    			for(int j = 0; j < n; j++){
    				if(s[j] <= mx) s[j] = min(s[j], mn);
    			}
    			break;
    		}
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