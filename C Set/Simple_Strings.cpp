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
 
char blackbox(char a = '*', char b = '*')
{
    for(char i = 'a'; i <= 'z'; i++)
        if(i != a && i != b) return i;
}

void solve()
{
    string s; cin >> s;
    int n = s.size();
    for(int i = 1; i < n; i++)
    {
        if(s[i] != s[i-1]) continue;
        if(i+1 < n) s[i] = blackbox(s[i-1], s[i+1]);
        else s[i] = blackbox(s[i-1]);
    }
    cout << s << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int t; cin >> t;
    // while(t--)
    // {
       solve();
    // }
    return 0;
}