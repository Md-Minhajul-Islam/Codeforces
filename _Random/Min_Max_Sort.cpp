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
    
    vii pos(n+1);
    for(int i = 1; i <= n; i++)
    {
    	int x; cin >> x;
    	pos[x] = i;
    }
    int l, r;
    if(n%2) l = (n+1)/2, r = l;
    else l = n/2, r = l+1;

    while(l > 0 && (l==r || pos[l] < pos[l+1] && pos[r] > pos[r-1]))
    {
    	--l; ++r;
    }
    cout << (n-r+l-1+2)/2 << "\n";
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