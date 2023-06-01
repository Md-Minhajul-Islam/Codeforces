// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int count = 0, flag = 0;
    for(char c: str)
    {
        if(isalpha(c))
        {
            if(flag == 0)
            {
                count++;
                flag = 1;
            }
        }
        else flag = 0;    
    }
    cout << count;
    return 0;
}