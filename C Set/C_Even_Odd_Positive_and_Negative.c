// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int even, odd, pos, neg;
    even = odd = pos = neg = 0;

    for(int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);
        if(num < 0)
            neg++;
        else if(num > 0)
            pos++;
        
        if(num%2== 0)
            even++;
        else
            odd++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}

