// Q: 
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000001];
    scanf("%s", s);
    int len = strlen(s);
    int count[26] = {0};
    for(int i = 0; i < len; i++)
        count[s[i]-'a']++;
    for(int i = 0; i < len; i++)
        if(count[i] > 0)
            printf("%c : %d\n", i+'a', count[i]);
    return 0;
}