// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include<stdio.h>
void print_digit(int n)
{
    if(n == 0) return;
    print_digit(n/10);
    printf("%d ", n%10); 
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        print_digit(n);
        if(n == 0) 
            printf("%d", n);
        printf("\n");
    }
    return 0;
}