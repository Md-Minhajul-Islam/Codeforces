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
    int n, d; cin >> n >> d;
    int a[d];
    memset(a, -1, sizeof(a));
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(a[x % d] == -1) a[x % d] = 0;
        a[x % d]++;
    }
    int cnt = (a[0] != -1);
    for(int i = 1; i < d; i++)
    {
        if(a[i] == -1) continue;
        if(a[d - i] == -1) cnt += a[i];
        else
        {
            if(a[i] == a[d-i]) cnt += 1;
            else cnt += abs(a[i]-a[d-i]);
            a[i] = -1, a[d-i] = -1;
        }
    }
    cout << cnt << '\n';
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