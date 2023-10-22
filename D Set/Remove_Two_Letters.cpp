// Q: https://codeforces.com/problemset/problem/1800/D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        map<string, int> mp;
        int cnt = 0;
        for(int i = 0; i < s.size()-1; i++)
        {
            string str = s;
            string str2 = str.erase(i, 2);
            if(mp[str2] == 0)
            {
                cnt++; mp[str2]++;
            }
            // cout << s.erase(i, 2) <<'\n';
            // str.erase(0, str.size());
        }
        cout << cnt <<'\n';
    }
    return 0;
}