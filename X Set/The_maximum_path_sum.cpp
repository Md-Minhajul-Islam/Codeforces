// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X
#include<bits/stdc++.h>
using namespace std;
int mat[12][12], n, m;
int maxi = -1e9;
void maxSum(int i, int j, int s)
{
    if(i == n-1 && j == m-1)
    {
        maxi = max(maxi, s+mat[i][j]);
        return;
    }
    if(i == n || j == m) return;
    maxSum(i+1, j, s+mat[i][j]);
    maxSum(i, j+1, s+mat[i][j]);
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];
    maxSum(0, 0, 0);
    cout << maxi;
    return 0;
}