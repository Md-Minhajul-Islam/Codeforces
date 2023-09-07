// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
#include<bits/stdc++.h>
using namespace std;
bool check(long long val, long long n)
{
    if(val >= n) return val == n;
    return check(val*10, n) || check(val*20, n);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(check(1, n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}