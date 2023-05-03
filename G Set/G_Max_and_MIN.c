// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
#include<stdio.h>
int min_max(int a[], int n, int x)
{
    int max = -1, min = 100001;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)  max = a[i];
        if(a[i] < min)  min = a[i];
    }
    if(x == 0)
        return min;
    else 
        return max;
}
 
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d %d", min_max(arr, n, 0), min_max(arr, n, 1));
    return 0;
}