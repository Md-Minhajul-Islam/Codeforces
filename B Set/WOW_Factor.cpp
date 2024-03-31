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
    string s; cin >> s;
    vector<ll> v;
    int i = 0;
    ll cnt = 0;
    while(i < s.size())
    {
        if(s[i] == 'v') cnt++;
        else 
        {
            if(cnt > 1) v.pb(cnt-1);
            v.pb(0);
            cnt = 0;
        }
        i++;
    }
    if(cnt > 1) v.pb(cnt-1);
    ll pref[v.size()], suff[v.size()];
    for(int i = 0; i < v.size(); i++)
    {
        if(i == 0) pref[i] = v[i];
        else pref[i] = v[i]+pref[i-1];
    }
    for(int i = v.size()-1; i >= 0; i--)
    {
        if(i == v.size()-1) suff[i] = v[i];
        else suff[i] = v[i]+suff[i+1];
    }
    ll tot = 0;
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] == 0)
        {
            tot += pref[i]*suff[i];
        }
    }
    cout << tot << '\n';
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