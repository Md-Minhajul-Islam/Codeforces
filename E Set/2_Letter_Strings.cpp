// Q: https://codeforces.com/problemset/problem/1669/E
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s[n];
        unordered_map<string, int> m;
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
            m[s[i]]++;
        }
        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(char c = 'a'; c <= 'k'; c++)
            {
                string s1 = ""; s1 += s[i][0]; s1 += c;
                if(s[i] != s1) ans += m[s1];
                s1 = ""; s1 += c; s1 += s[i][1];
                if(s[i] != s1) ans += m[s1];
            }
            m[s[i]]--;
        }
        cout << ans <<"\n";
    }
    return 0;
}