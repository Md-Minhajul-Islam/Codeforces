// Q: https://codeforces.com/problemset/problem/1800/C1
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
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long sum = 0;
        priority_queue<long long> q;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                if (q.empty()) continue;
                sum += q.top();
                q.pop();
            }
            else q.push(arr[i]);
        }
        cout << sum << '\n';
    }
    return 0;
}