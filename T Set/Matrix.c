// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    int primarySum = 0, secondarySum = 0;
    for(int i = 0, j = n-1; i < n; i++, j--)
    {
        primarySum += a[i][i];
        secondarySum += a[i][j];
    }
    int diff = primarySum-secondarySum;
    if(diff < 0) diff *= -1;
    printf("%d", diff);
    return 0;
}