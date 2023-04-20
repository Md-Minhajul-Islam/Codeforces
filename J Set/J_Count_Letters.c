// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include<stdio.h>
#include<string.h>
char s[10000001];   // the array size is big so it declared globally, it
int count[26];      // can also done by using EOF inside main function
int main()
{ 
    scanf("%s", s);
    int len = strlen(s);
    for(int i = 0; i < len; i++)
        count[s[i]-'a']++;
    for(int i = 0; i < 26; i++)
        if(count[i] > 0)
            printf("%c : %d\n", i+'a', count[i]);
    return 0;
}