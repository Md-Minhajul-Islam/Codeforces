// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include<stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    
    int a, maximum = -1;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a > maximum)
            maximum = a;
    }
    printf("%d\n", maximum);
    
    return 0;
}