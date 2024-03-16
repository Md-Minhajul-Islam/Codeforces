// Q: https://codeforces.com/problemset/problem/1800/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < n; i++)
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        stack<char> st;
        for(int i = n-1; i >= 0; i--)
        {
            if(st.empty()) st.push(s[i]);
            else if(st.top() != s[i]) st.push(s[i]);
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top(); st.pop();
        }
        if(ans == "meow") cout<<"YES";
        else cout <<"NO";
        cout << '\n';
    }
    return 0;
}