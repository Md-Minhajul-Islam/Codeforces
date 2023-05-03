// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
#include<stdio.h>
int sum(int x, int y)
{
    return x+y;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", sum(x, y));
    return 0;
}