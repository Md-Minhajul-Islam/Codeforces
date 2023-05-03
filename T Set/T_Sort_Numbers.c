
// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[3] = {a, b, c};
    for(int i = 0; i < 2; i++)
    {
        int small = i;
        for(int j = i+1; j < 3; j++)
            if(arr[small] > arr[j])
                small = j;
        if(small != i)
        {
            int temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }
    }
    printf("%d\n%d\n%d\n\n", arr[0], arr[1], arr[2]);
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}