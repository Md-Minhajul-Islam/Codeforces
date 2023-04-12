// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include<stdio.h>
int main()
{
    long long int e, m, b, total = 0;
    scanf("%lld %lld %lld", &e, &m, &b);

    if(m < b && m < e)
        total = m;
    else if(b < e)
        total = b;
    else 
        total = e;
    m -= total; b -= total; e -= total;

    e /= 2;
    if(e < b)
        total += e;
    else  
        total += b;

    printf("%lld\n", total);

    return 0;
}
