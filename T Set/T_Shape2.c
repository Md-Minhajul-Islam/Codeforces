// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, s = n-1;;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < s; j++)
            printf(" ");
        for(int l = 0; l < k; l++)
            printf("*");
        printf("\n");
        k += 2, s--;
    }
    return 0;
}