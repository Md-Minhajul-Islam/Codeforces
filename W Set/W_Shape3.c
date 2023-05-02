// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, s = n-1;
    for(int i = 1; i <= 2*n; i++)
    {
        for(int j = 0; j < s; j++)
            printf(" ");
        for(int l = 0; l < k; l++)
            printf("*");
        printf("\n");

        if(i < n)
            k += 2, s--;
        if(i > n)
            k -= 2, s++;
    }
    return 0;
}