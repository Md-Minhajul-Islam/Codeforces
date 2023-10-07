// Q: https://codeforces.com/problemset/problem/102/B
#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n == 0) return 0;
    return fun(n/10)+n%10;
}
int main()
{
    int sum = 0, check = 0;
    char ch;
    while(cin >> ch)
    {
        sum += ch-'0';
        check++;
    }
    int cnt;
    if(check == 1) cnt = 0;
    else cnt = 1;
    while(sum/10)
    {
        sum = fun(sum);
        cnt++;
    }
    cout << cnt;
    return 0;
}