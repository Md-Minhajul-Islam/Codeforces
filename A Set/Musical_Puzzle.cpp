// Q: https://codeforces.com/problemset/problem/1833/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        unordered_set<string> st;
        for(int i = 0; i < n-1; i++)
        {
            string a; a += s[i]; a += s[i+1];
            st.insert(a);
        }
        cout << st.size() << "\n";
    }
    return 0;
}