// Q: https://codeforces.com/problemset/problem/1833/B
#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        pii a1[n]; int a2[n], ans[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a1[i].first;
            a1[i].second = i;
        }
        for (int i = 0; i < n; i++) cin >> a2[i];
        sort(a1, a1+n);
        sort(a2, a2+n);
        for(int i = 0; i < n; i++)
            ans[a1[i].second] = a2[i];
        for(int i = 0; i < n; i++) cout << ans[i] <<" ";
        cout <<"\n";
    }
    return 0;
}