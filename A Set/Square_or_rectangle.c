// Q: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int w, h;
        scanf("%d %d", &w, &h);
        if(w == h)
            printf("Square");
        else
            printf("Rectangle");
        printf("\n");
    }
    return 0;
}