// Q: https://codeforces.com/problemset/problem/1790/D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
    int n; cin >> n; int a[n];
    map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i]; m[a[i]]++; 
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(m[a[i]+1])
        {
            m[a[i]+1]--;
        }
        else ans += 1;
    }
    cout << ans <<'\n';
    }
    return 0;
}