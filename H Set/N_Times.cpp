// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
#include<bits/stdc++.h>
using namespace std;
void print(char c)
{
    cout << c << " ";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        while(n--) print(c);
        cout << endl;
    }
    return 0;
}