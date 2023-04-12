// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min = 1000000, loc = -1;
    for(int i = 0; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            loc = i+1;
        }        
    }
    printf("%d %d\n", min, loc);
    return 0;
}

