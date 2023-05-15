// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int min = 1000000;
    int frequency = 0;
    for(int i = 0; i < n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
            frequency = 0;
        }
        if(min == a[i]) frequency++;
    }
    if(frequency%2 == 0)
        printf("Unlucky");
    else
        printf("Lucky");
    return 0;
}