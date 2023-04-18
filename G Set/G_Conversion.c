// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
        if(s[i] == ',')
            s[i] = ' ';
        else if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] - 'a') + 'A';
        else
            s[i] = (s[i] -'A') + 'a';
        printf("%c", s[i]);
    }
    return 0;
}

