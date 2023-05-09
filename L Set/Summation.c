// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
#include<stdio.h>
long long int sum(int a[], int n)
{
    if(n == 0) return 0;
    return (sum(a, n-1) + a[n-1]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%lld", sum(a, n));
    return 0;
}