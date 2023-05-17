// Q: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int left = 0, right = n-1;
    while(left < right)
    {
        printf("%d %d ", a[left], a[right]);
        left++, right--;
    }
    if(n%2 != 0)
        printf("%d ", a[left]);
    return 0;
}