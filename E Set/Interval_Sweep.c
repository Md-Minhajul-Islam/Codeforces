// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a-b;
    if(c < 0) c *= -1;
    
    if(a == 0 && b == 0)
        printf("NO");
    else if(c < 2)
        printf("YES");
    else
        printf("NO");
    return 0;
}