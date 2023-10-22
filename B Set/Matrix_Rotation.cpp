// Q: https://codeforces.com/problemset/problem/1772/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        bool flag;
        if(a < b && a < c && d > b && d > c) flag = 1;
        else if(c < a && c < d && b > a && b > d) flag = 1;
        else if(d < c && d < b && a > c && a > b) flag = 1;
        else if(b < d && b < a && c > d && c > a) flag = 1;
        else flag = 0;
        if(flag) cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}