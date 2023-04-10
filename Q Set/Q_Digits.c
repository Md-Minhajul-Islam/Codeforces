// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219432/my
#include<stdio.h>
 
int main()
{
    int n, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        do
        {
            printf("%d ", n%10);
            n /= 10;
        }while(n);
        printf("\n");
    }
    return 0;
}

