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
    int n, m; cin >> n >> m;
    vii v(m);
    for(int i = 0; i < m; i++) cin >> v[i];
    sort(v.begin(), v.end());
    vii gaps;
    gaps.pb(v[0]-1+n-v[m-1]);
    for(int i = 1; i < m; i++) gaps.pb(v[i]-v[i-1]-1);
    sort(gaps.begin(), gaps.end(), greater<int>());
    int spread = 0, safe = 0;
    for(int i = 0; i < gaps.size(); i++)
    {
        gaps[i] -= spread;
        if(gaps[i] < 1) break;
        safe++;
        spread += 2;
        gaps[i] -= 1;
        if(gaps[i] > 1)
        {
            safe += gaps[i]-1;
            spread += 2;
        }
    }
    cout << n-safe << '\n';

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