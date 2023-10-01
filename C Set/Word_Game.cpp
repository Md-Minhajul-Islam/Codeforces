// Q: https://codeforces.com/problemset/problem/1722/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<string, int> mp;
        vector<string> v1, v2, v3;
        for(int i = 0; i < n; i++)
        {
            string s; cin >> s;
            v1.push_back(s); mp[s]++;
        }
        for(int i = 0; i < n; i++)
        {
            string s; cin >> s;
            v2.push_back(s); mp[s]++;
        }
        for(int i = 0; i < n; i++)
        {
            string s; cin >> s;
            v3.push_back(s); mp[s]++;
        }
        int ans1 = 0, ans2 = 0, ans3 = 0;
        for(int i = 0; i < n; i++)
        {
            int cnt = mp[v1[i]];
            if(cnt == 3) continue;
            else if(cnt == 2) ans1 += 1;
            else ans1 += 3;
        }
        for (int i = 0; i < n; i++)
        {
            int cnt = mp[v2[i]];
            if(cnt == 3) continue;
            else if(cnt == 2) ans2 += 1;
            else ans2 += 3;
        }
        for (int i = 0; i < n; i++)
        {
            int cnt = mp[v3[i]];
            if(cnt == 3) continue;
            else if(cnt == 2) ans3 += 1;
            else  ans3 += 3;
        }
        cout << ans1 << " " << ans2 << " " << ans3 <<"\n";
    }
    return 0;
}