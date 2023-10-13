// Q: https://codeforces.com/problemset/problem/1676/C
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        string s[n];
        for(int i = 0; i < n; i++)
            cin >> s[i];
        int mini = INT_MAX;
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                    sum += abs((s[i][k]-'a')-(s[j][k]-'a'));
                mini = min(sum, mini);
            }
                    
        cout << mini <<"\n";
    }
    return 0;
}