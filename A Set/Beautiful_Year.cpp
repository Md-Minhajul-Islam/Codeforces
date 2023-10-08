// Q: https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std;
int isValid(int n)
{
    int a, b, c, d;
    a = n%10; n /= 10;
    b = n%10; n /= 10;
    c = n%10; n /= 10;
    d = n%10;
    return (a != b && a != c && a != d && b != c && b != d && c != d);
}
int main()
{
    int n; cin >> n;
    int ans; 
    for(int i = n+1; i < 9100; i++)
        if(isValid(i))
        {
            ans = i; break;
        }
    cout << ans;
    return 0;
}