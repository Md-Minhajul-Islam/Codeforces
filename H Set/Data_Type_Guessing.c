// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
#include<stdio.h>
int main()
{
    long long int n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);
    if(n*k%a != 0)
        printf("double");
    else if(n*k/a < -2147483648 || n*k/a > 2147483647)
        printf("long long");
    else
        printf("int");
    return 0;
}