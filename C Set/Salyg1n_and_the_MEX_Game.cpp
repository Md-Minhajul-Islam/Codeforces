// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

void solve()
{
    int n; cin >> n;
    int mn = n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x != i) mn = min(mn, i);
    }
    int y = 1;
    while(y != -1)
    {
        cout << mn << endl;
        cin >> y;
        mn = y;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}