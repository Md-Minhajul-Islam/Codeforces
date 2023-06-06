// Q: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    int count = 0, same = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] + 1 == arr[i + 1])
            count += same, same = 1;
        else if (arr[i] == arr[i + 1])
            same++;
        else
            same = 1;
    }
    printf("%d", count);
    return 0;

    return 0;
}