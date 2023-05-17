// Q: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n-1; i++)    // Sorting
    {
        int small = i;
        for(int j = i+1; j < n; j++)
            if(a[small] > a[j])
                small = j;
        if(small != i)
        {
            int temp = a[i];
            a[i] = a[small];
            a[small] = temp;
        }
    }
    int count = 0, same = 1;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i]+1 == a[i+1])
        {
            count += same;
            same = 1;
        }
        else if(a[i] == a[i+1])
            same++;
        else 
            same = 1;
    }
    printf("%d", count);
    return 0;
}