// Q: https://codeforces.com/problemset/problem/1676/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        long long a[n], min = 1e8;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(min > a[i]) min = a[i];
        }
        long long ans = 0;
        for(int i = 0; i < n; i++) ans += a[i]-min;
        cout << ans <<"\n";
    }
    return 0;
}