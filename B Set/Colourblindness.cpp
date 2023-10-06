// Q: https://codeforces.com/problemset/problem/1722/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string a, b;
        cin >> a >> b;
        bool flag = 1;
        for(int i = 0; i < n; i++)
            if((a[i] == 'R' && b[i] != 'R') || (a[i] != 'R' && b[i] == 'R'))
            {
                flag = 0; break;
            }
        if(flag) cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}