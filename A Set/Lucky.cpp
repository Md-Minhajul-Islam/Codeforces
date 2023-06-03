// Q: https://codeforces.com/contest/1676/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string num;
        cin >> num;
        if((num[0]-'0')+(num[1]-'0')+(num[2]-'0') == (num[3]-'0')+(num[4]-'0')+(num[5]-'0'))
            cout << "YES\n";
        else cout << "NO\n";        
    }
    return 0;
}