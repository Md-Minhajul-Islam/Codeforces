// Q: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include<stdio.h>
int main()
{
    float x, p;
    scanf("%f %f", &x, &p);
    printf("%.2f", (100.0*p)/(100.0 - x));
    return 0;
}

//use float for this problem, ignore double as codeforces C compiler have problem with double data type)