// Q: https://codeforces.com/problemset/problem/1669/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[200005] = {0};
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            a[x]++;
        }
        int ans = -1;
        for(int i = 1; i <= n; i++)
            if(a[i] > 2)
            {
                ans = i; break;
            }
        cout << ans <<"\n";
    }
    return 0;
}