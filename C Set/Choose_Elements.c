// Q: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
//sorting
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
            if(a[min] < a[j])
                min = j;
        if(min != i){
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    long long int sum = 0;
    for(int i = 0; i < k; i++)
    {
        long long int temp = sum + a[i];
        if(temp < sum) break;   // we can choose less than k numbers.
        sum = temp;
    }
    printf("%lld", sum);
    return 0;
}