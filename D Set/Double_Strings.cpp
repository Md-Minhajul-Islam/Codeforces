// Q: https://codeforces.com/problemset/problem/1703/D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string a[n];
        unordered_map<string, bool> m;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i]; 
            m[a[i]] = 1;
        }
        bool ans[n] = {0};
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j <= a[i].size(); j++)
                if(m[a[i].substr(0, j)] == 1 && m[a[i].substr(j, a[i].size())] == 1)
                {
                    ans[i] = 1; break;
                }
        }
        for(int i = 0; i < n; i++) cout <<ans[i];
        cout <<  "\n";
    }
    return 0;
}