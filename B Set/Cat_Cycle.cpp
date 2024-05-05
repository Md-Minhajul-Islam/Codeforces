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
    int n, k;
    cin >> n >> k;
    k--;
    if(n % 2 == 0) {
        cout << (k%n)+1 << "\n";
    } else {
        int mid = (n / 2);
        int ans = ((k / mid) + k) % n;
        cout << ans+1 << "\n";
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