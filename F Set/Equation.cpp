// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include<bits/stdc++.h>
using namespace std;
long long power(int x, int n)
{
    long long sum = 1;
    for(int i = 1; i <= n; i++)
        sum *= x;
    return sum;
}
long long ans(int x, int n)
{
    long long sum = 0;
    for(int i = 2; i <= n; i+=2)
        sum += power(x, i);
    return sum;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << ans(x, n);
    return 0;
}