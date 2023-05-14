// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
#include<stdio.h>
int max_num(int a[], int n)
{
    if(n == 0) return a[0];
    int max = max_num(a, n-1);
    if(max < a[n])
        max = a[n];
    return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%d", max_num(a, n-1));
    return 0;
}