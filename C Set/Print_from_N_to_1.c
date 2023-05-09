// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include<stdio.h>
void print(int n)
{
    if(n == 0) return;
    printf(" %d", n);
    print(--n);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", n);
    print(n-1);
    return 0;
}