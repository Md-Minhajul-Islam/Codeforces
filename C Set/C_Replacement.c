// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
            arr[i] = 1;
        else if(arr[i] < 0)
            arr[i] = 2;
    }
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

