// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int div = n/10;
    int rem = n%10;
    if(rem%div == 0 || div%rem == 0)
        printf("YES\n");
    else   
        printf("NO\n");
    return 0;
}
