// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
// chosse language GNU G++ 17 7.3.0
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s[26] = {0};
    for(int i = 0; i <= n; i++)
    {
        char ch;
        scanf("%c", &ch);
        s[ch-'a']++;
    }   
    for(int i = 0; i < 26; i++)
        for(int j = 0; j < s[i]; j++)
           printf("%c", i+'a');
    return 0;
}