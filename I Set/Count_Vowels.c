// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
#include<stdio.h>
int count_vowel(char s[], int i)
{
    if(s[i] == '\0') return 0;
    int ans = count_vowel(s, i+1);
    if(s[i] >= 'A' && s[i] <= 'Z')
        s[i] += 32;
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        return ans+1;
    else
        return ans;
}
int main()
{
    char s[202];
    fgets(s, 202, stdin);
    printf("%d", count_vowel(s, 0));
    return 0;
}