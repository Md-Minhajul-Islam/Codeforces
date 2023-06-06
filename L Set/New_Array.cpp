// Q: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include<bits/stdc++.h>
using namespace std;
void print(int *a, int *b, int n)
{
    vector<int> v;
    for(int i = 0; i < n; i++)
        v.push_back(b[i]);
    for(int i = 0; i < n; i++)
        v.push_back(a[i]);
    for(int num: v)
        cout << num << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    print(a, b, n);
    return 0;
}