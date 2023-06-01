// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int start = 0;
    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            for(int end = i-1; end >= start; end--)
                cout << str[end];
            start = i+1;
            if(str[i] != '\0') cout << " ";
        }
    }
    return 0;
}