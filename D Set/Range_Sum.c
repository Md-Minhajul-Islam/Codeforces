// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int l, r;
        scanf("%lld %lld", &l, &r);
        if(l > r)
        {
            long long int temp = l;
            l = r;
            r = temp;
        }
        long long int ans = r*(r+1)/2 - l*(l-1)/2;      // summation of 1 to r - summation of 1 to (l-1);
        printf("%lld\n", ans);
    }
    return 0;
}