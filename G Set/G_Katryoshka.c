// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include<stdio.h>
int main()
{
    long long int e, m, b, total;
    scanf("%lld %lld %lld", &e, &m, &b);

    total = m;
    if(e < total)
        total = e;
    if(b < total)
        total = b; 
    m -= total; b -= total; e -= total;

    e /= 2;
    if(e < b)
        total += e;
    else  
        total += b;

    printf("%lld\n", total);

    return 0;
}
