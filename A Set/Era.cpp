// Q: https://codeforces.com/problemset/problem/1604/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long a[n+1];
        a[0] = 0;
        for(int i = 1; i <= n; i++) cin >> a[i];
        long long cnt = 0;
        int j = 1;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] <= j) j++;
            else
            {
                cnt += a[i] - j;
                j = a[i] + 1;
            }
        }
        cout << cnt <<"\n";
    }
    return 0;
}