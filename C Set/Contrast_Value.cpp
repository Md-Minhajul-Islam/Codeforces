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
    vii v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    auto it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    int i = 0, j = i+2, ans = v.size();
    while(j < v.size())
    {
        if(abs(v[i]-v[j-1])+abs(v[j-1]-v[j]) == abs(v[i]-v[j]))
        {
            ans--;
            j++;
        }
        else i = j-1, j = i+2;
    }
    cout << ans << '\n';
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