// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int flag = 0, i = 0;
    while(i < n)
    {
        if(arr[i++] != arr[--n])
        {
            flag = 1;
            break;
        }
    }
    if(flag)    cout << "NO";
    else    cout << "YES";
    return 0;
}