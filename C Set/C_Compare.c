// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include<stdio.h>
#include<string.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", x, y);
    int val = strcmp(x, y);
    if(val > 0)
        printf("%s", y);
    else
        printf("%s", x);
    return 0;
}