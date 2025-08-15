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
    string a, b; cin>> a >> b;
    int n = a.size();
    int ans = 0;
    int i = 0;
    while(i < n && a[i] == b[i]) ans += 2, i++;

    if(i >= n){
    	cout << ans << "\n";
    	return;
    }

    if(b[i]-a[i] > 1){
    	cout << ans << "\n";
    	return;
    }
    int op1 = 1;
    int ind = i+1;
    while(ind < n && a[ind] == '9') op1++, ind++;
    int op2 = 1;
    ind = i+1;
    while(ind < n && b[ind] == '0') op2++, ind++;

    ans += min(op1, op2);

    cout << ans << "\n";
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