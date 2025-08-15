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
    
    map<pii, int> mp;
    int l, r, c; cin >> l >> r >> c;
    mp[{l, r}] = c;
    int left = l, right = r, left_val = c, right_val = c;
    cout << c << "\n";
    --n;
    while(n--)
    {
    	cin >> l >> r >> c;

        if(l < left) left = l, left_val = c;
        else if(l == left) left_val = min(c, left_val);

        if(r > right) right = r, right_val = c;
        else if(r == right) right_val = min(c, right_val);

        if(mp.find({l, r}) == mp.end()) mp[{l, r}] = c;
        else mp[{l, r}] = min(mp[{l, r}], c);

        if(mp.find({left, right}) == mp.end()) cout << left_val+right_val << "\n";
        else cout << min(left_val+right_val, mp[{left, right}]) << "\n";
        
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