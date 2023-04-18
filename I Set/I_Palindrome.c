// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int start = 0, end = strlen(s)-1, flag = 1;
    while(start < end)
    {
        if(s[start] != s[end])
        {
            flag = 0;
            break;
        }
        start++, end--;
    }
    if(flag)
        printf("YES");
    else 
        printf("NO");
    return 0;
}


