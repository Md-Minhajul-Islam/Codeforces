// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int min = 1000000000, count = 1;
    for(int i = 0; i < n; i++)
    {
        if(min > a[i]) min = a[i];
        if(count == k || i == n-1)
        {
            printf("%d ", min);
            count = 0, min = 1000000000;
        }
        count++;
    }
    return 0;
}