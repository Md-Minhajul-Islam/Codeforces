// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
#include<stdio.h>
void print(int a[], int n, int i)
{
    if(i >= n) return;
    print(a, n, i+2);
    printf("%d ", a[i]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    print(a, n, 0);
    return 0;
}