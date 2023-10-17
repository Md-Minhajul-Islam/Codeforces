// Q: https://codeforces.com/problemset/problem/1873/E
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, x;
        cin >> n >> x;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        long long l = 0, h = 2e9+7;
        while(l < h)
        {
            long long m = l + (h-l+1)/2;
            long long total = 0;
            for(int i = 0; i < n; i++) total += max(m-a[i], 0LL);
            if(total <= x) l = m;
            else h = m-1;
        }
        cout << l << "\n";
    }

    return 0;
}