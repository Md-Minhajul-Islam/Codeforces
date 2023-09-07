// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
#include<bits/stdc++.h>
using namespace std;
int a[25];
int n, x;
bool func(int indx, int s)
{
    if(indx == n) return s == x;
    return func(indx+1, s+a[indx]) || func(indx+1, s-a[indx]);
}
int main()
{
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];
    if (func(1, a[0])) cout << "YES";
    else cout << "NO";
    return 0;
}