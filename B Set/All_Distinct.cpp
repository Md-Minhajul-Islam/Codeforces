// Q: https://codeforces.com/problemset/problem/1692/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[10005] = {0};
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            a[x]++;
        }
        int ans = 0;
        for(int i = 1; i < 10005; i++)
        {
            if(a[i])
            {
                ans += a[i]-1;
            }
        }
        if(ans%2 == 0) cout << n-ans <<"\n";
        else cout << n-ans-1 <<"\n";
    }
    return 0;
}