// Q: https://codeforces.com/problemset/problem/621/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; int a[n];
    long long sum = 0;
    for(int i = 0; i <  n; i++)
    {
        cin >> a[i]; sum += a[i];
    }
    sort(a, a+n);
    if(sum % 2 == 0) cout  << sum;
    else
    {
        for(int i = 0; i < n; i++)
            if(a[i]%2 == 1) 
            {
                sum -= a[i]; break;
            }
        cout << sum;
    }
    return 0;
}