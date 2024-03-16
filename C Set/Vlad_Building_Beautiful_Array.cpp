// Q: https://codeforces.com/problemset/problem/1833/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        vector<int> even, odd;
        int n; cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            if(x%2 == 0) even.push_back(x);
            else odd.push_back(x);
        }
        if(even.size() == n || odd.size() == n) cout <<"YES\n";
        else
        {
            bool flag = 1;
            sort(odd.begin(), odd.end());
            for(auto i: even)
            {
                if(i < odd[0]){flag = 0; break;}
            }
            if(flag) cout <<"YES\n";
            else cout <<"NO\n";
        }
    }
    return 0;
}