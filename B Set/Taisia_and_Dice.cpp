// Q: https://codeforces.com/problemset/problem/1790/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int x = s-r;
        int a[n]; a[0] = x;
        int i = 1;
        while(i < n)
        {
            if(r-x >= n-1-i) 
            {
                a[i] = x;
                r -= x; i++;
            }
            else x--;
        }
        for(int i = 0; i < n; i++) cout << a[i] <<" ";
        cout << "\n";
    }
    return 0;
}