// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int slash = n, backslash = 1, mid = n/2+1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == mid && j == mid) printf("X");
            else if(j == slash) printf("/");
            else if(j == backslash) printf("\\");
            else printf("*");
        }
        printf("\n");
        slash--, backslash++;
    }
    return 0;
}