// Q: https://codeforces.com/problemset/problem/1790/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n][n-1];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n-1; j++)
                cin >> a[i][j];
        int cnt[n+1] = {0};
        int x = a[0][0], y;
        for(int i = 0; i < n; i++)
        {
            if(a[i][0] != x) y = a[i][0];
            cnt[a[i][0]]++;
        }
        int ans[n];
        if(cnt[x] > cnt[y]) ans[0] = x, ans[1] = y;
        else ans[0] = y, ans[1] = x;
        int visited[n+1] = {0};
        visited[x] = visited[y] = 1;
        for(int c = 1; c < n-1; c++)
        {
            for(int r = 0; r < n; r++)
            {
                if(!visited[a[r][c]])
                {
                    ans[c+1] = a[r][c];
                    visited[a[r][c]] = 1;
                    break;
                }
            }
        }
        for(int i = 0; i < n; i++)
            cout << ans[i] <<" ";
        cout <<"\n";
    }
    return 0;
}