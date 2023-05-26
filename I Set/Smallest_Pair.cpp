// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int smallerstPair = 1000000000;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                smallerstPair = min(smallerstPair, arr[i] + arr[j] + j - i);
            }
        }
        cout << smallerstPair << endl;
    }
    return 0;
}