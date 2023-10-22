// Q: https://codeforces.com/problemset/problem/1759/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "";
    for(int i = 0; i < 50; i++) str += "Yes";
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(str.find(s) != -1) cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}