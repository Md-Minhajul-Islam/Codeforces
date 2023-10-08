// Q: https://codeforces.com/problemset/problem/1722/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(n != 5) cout <<"NO";
        else
        {
            sort(s.begin(), s.end());
            if(s == "Timru") cout << "Yes";
            else cout <<"NO";
        }
        cout << "\n";
    }
    return 0;
}