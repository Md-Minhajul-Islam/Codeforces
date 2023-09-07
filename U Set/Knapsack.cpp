// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
#include<bits/stdc++.h>
using namespace std;
int w[22], v[22];
int knapsack(int n, int W)
{
    if(n < 0 || W == 0) return 0;
    if(W >= w[n])
    {
        int choice1 = knapsack(n-1, W-w[n]) + v[n];
        int choice2 = knapsack(n-1, W);
        return max(choice1, choice2);
    }
    else return knapsack(n-1, W);
}
int main()
{
    int n, W;
    cin >> n >> W;
    for(int i = 0; i < n; i++) 
        cin >> w[i] >> v[i];
    cout << knapsack(n-1, W);
    return 0;
}