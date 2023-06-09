// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int min, max, minI, maxI;
    min = max = a[0];
    minI = maxI = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            minI = i;
        }
        if(a[i] > max)
        {
            max = a[i];
            maxI = i;
        }
    }
    int temp = a[minI];
    a[minI] = a[maxI];
    a[maxI] = temp;
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}

