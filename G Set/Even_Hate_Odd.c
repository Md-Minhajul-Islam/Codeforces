// Q: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++)
        {
            int num;
            scanf("%d", &num);
            if(num%2 == 0) even++;
            else odd++;
        }
        if(n%2 != 0)
            printf("-1\n");
        else if(even == odd)
            printf("0\n");
        else if(even > odd)
            printf("%d\n", n/2-odd);
        else 
            printf("%d\n", n/2-even);
    }
    return 0;
}