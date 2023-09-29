// Q: https://codeforces.com/problemset/problem/633/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    int i = 0;
    while(i <= c)
    {
        if((c-i)%b == 0){flag = 1; break;};
        i += a;
    }
    if(flag) cout <<"Yes";
    else cout << "No";
    return 0;
}