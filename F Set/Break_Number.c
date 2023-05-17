// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    int indx = 0;
    for(int i = 0; i < n; i++)
    {
        long long int num;
        scanf("%lld", &num);
        if(num%2 == 0)
            a[indx++] = num;
    }
    int max = 0;
    for(int i = 0; i < indx; i++)
    {
        int count = 0;
        long long int num = a[i];
        while(num%2 == 0)
        {
            count++;
            num /= 2;
        }
        if(count > max) max = count;
    }
    printf("%d", max);
    return 0;
}