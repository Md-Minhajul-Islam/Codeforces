// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include<stdio.h>
long long int factorial(long long int n)
{
    if(n == 0) return 1;
    else   
        return factorial(n-1)*n;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%lld", factorial(n));
    return 0;
}