// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    long long sum[n];
    sum[0] = a[0];
    for(int i = 1; i < n; i++)
        sum[i] = sum[i-1]+a[i];
    for(int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if(l > 1)
            cout << sum[r-1]-sum[l-2] << endl;
        else 
            cout << sum[r-1] << endl;
    }
    return 0;
}