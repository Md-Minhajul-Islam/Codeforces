// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    long long int multi = (long long int) x*y;
    cout << x << " + " << y << " = " << x+y << endl;
    cout << x << " * " << y << " = " << multi << endl;
    cout << x << " - " << y << " = " << x-y << endl;
    return 0;
}