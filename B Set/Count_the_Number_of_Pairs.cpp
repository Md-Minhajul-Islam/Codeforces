// Q: https://codeforces.com/problemset/problem/1800/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        unordered_map<char, int> mp;
        for(int i = 0;i < n; i++)
        {
            char ch; cin >> ch;
            mp[ch]++;
        }
        int cnt = 0;
        for(char c = 'a'; c <= 'z'; c++)
        {
            int x = min(mp[c], mp[c-32]);
            cnt += x, mp[c] -= x, mp[c-32] -= x;
            if(mp[c] && k) 
            {
                int num = min(mp[c]/2, k);
                cnt += num; k -= num;
            }
            else if(mp[c-32] && k)
            {
                int num = min(mp[c-32]/2, k);
                cnt += num, k -= num;
            }
        }
        cout << cnt <<'\n';
    }
    return 0;
}