// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    long long int num, sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &num);
        sum += num;
    }
    if(sum < 0)
        sum *= -1;
    printf("%lld", sum);
    return 0;
}

