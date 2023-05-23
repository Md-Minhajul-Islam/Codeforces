// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if(x >= '0' && x <= '9')
        cout << "IS DIGIT";
    else
    {
        cout << "ALPHA\n";
        if(x >= 'a' && x <= 'z')
            cout << "IS SMALL";
        else 
            cout << "IS CAPITAL";
    }
    return 0;
}