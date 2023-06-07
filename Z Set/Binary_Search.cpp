// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include<bits/stdc++.h>
using namespace std;
bool search(int x, int *a, int n)
{
    int l = 0, r = n-1;
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(a[mid] == x) return true;
        else if(a[mid] > x) r = mid-1;
        else l = mid+1;
    }
    return false;
}
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    for(int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if(search(x, a, n))
            cout << "found\n";
        else
            cout << "not found\n";
    }
    return 0;
}