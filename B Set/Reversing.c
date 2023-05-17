// Q: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            int l = 0, r = i-1;
            while(l < r)
            {
                int temp = a[l];
                a[l] = a[r];
                a[r] = temp;
                l++, r--;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}