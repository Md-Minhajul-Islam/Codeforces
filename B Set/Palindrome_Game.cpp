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
    string s; cin >> s;
    int zero = 0, f = 1;
    zero += (s[0] == '0');
    for(int i = 1; i < n; i++)
    {
        if(s[i] != s[i-1]) f = 0;
        if(s[i] == '0') zero++;
    }
    if(f && s[0] == '1')
    {
        cout << "DRAW\n";
        return;
    }
    if(n%2 && zero >= 3 && s[n/2] == '0')
    {
        cout << "ALICE\n";
    }
    else cout << "BOB\n";
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