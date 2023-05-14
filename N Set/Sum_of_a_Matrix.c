// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
#include<stdio.h>
void print_sum(int r, int c, int a[][c], int b[][c])
{
    if(r == 0) return;
    print_sum(r-1, c, a, b);
    for(int i = 0; i < c; i++)
        printf("%d ", a[r-1][i]+b[r-1][i]);
    printf("\n");
}
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    print_sum(r, c, a, b);
    return 0;
}