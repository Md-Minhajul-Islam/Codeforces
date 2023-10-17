// Q: https://codeforces.com/problemset/problem/1790/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2;
        s1 = "314159265358979323846264338327";
        cin >> s2;
        int i;
        for(i = 0; i < s2.size(); i++)
            if(s1[i] != s2[i]) break;
        cout << i <<"\n";
    }
    return 0;
}