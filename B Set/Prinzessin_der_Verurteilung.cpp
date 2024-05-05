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
    int n; cin >> n; string s; cin >> s;
    map<string, int> m;
    for(int i = 0; i < n; i++)
    {
        string ss; ss += s[i];
        m[ss]++;
    }
    for(int i = 1; i < n; i++)
    {
        string ss; ss += s[i-1]; ss += s[i];
        m[ss]++;
    }
    for(int i = 2; i < n; i++)
    {
        string ss; ss += s[i-2]; ss += s[i-1]; ss += s[i];
        m[ss]++;
    }
    
    for(char i = 'a'; i <= 'z'; i++)
    {
        string ss; ss += i;
        if(m.find(ss) == m.end())
        {
            cout << ss << '\n';
            return;
        }
    }
    for(char i = 'a'; i <= 'z'; i++)
    {
        for(char j = 'a'; j <= 'z'; j++)
        {
            string ss; ss += i; ss += j;
            if(m.find(ss) == m.end())
            {
                cout << ss << '\n';
                return;
            }
        }
    }
    for(char i = 'a'; i <= 'z'; i++)
    {
        for(char j = 'a'; j <= 'z'; j++)
        {
            for(char k = 'a'; k <= 'z'; k++)
            {
                string ss; ss += i; ss += j; ss += k;
                if(m.find(ss) == m.end())
                {
                    cout << ss << '\n';
                    return;
                }
            }
            
        }
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