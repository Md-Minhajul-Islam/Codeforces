// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans;
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        if(i+4 < len && s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T')
        {
            ans += ' ';
            i += 4;
        }
        else ans += s[i];
    }
    cout << ans;
    return 0;
}