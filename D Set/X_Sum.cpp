// Q: https://codeforces.com/problemset/problem/1676/D
#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
vector<pii> direc = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
int g[202][202];
int n, m;
bool isValid(int i, int j)
{
    if(i >= 0 && i < n && j >= 0 && j < m) return 1;
    else return 0;
}
int fun(int i, int j, int di, int dj)
{
    int sum = 0;
    while(isValid(i+di, j+dj))
    {
        sum += g[i+di][j+dj];
        i += di, j += dj;
    }
    return sum;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> g[i][j];
        int maxSum = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int sum = g[i][j];
                for(auto v: direc)
                {
                    sum += fun(i, j, v.first, v.second);
                }
                maxSum = max(maxSum, sum);
            }
        }
        cout << maxSum <<"\n";
    }
    return 0;
}