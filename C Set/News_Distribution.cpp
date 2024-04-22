#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 5e5 + 9;
int parent[N];
int Size[N];
void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}
int find(int v)
{
    if(parent[v] == v) return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a); b = find(b);
    if(a != b)
    {
        if(Size[a] < Size[b]) swap(a, b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) make(i);
    while(m--)
    {
        int k; cin >> k;
        int x;
        if(k) cin >> x;
        for(int i = 2; i <= k; i++)
        {
            int y; cin >> y;
            Union(x, y);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(parent[i] == i) continue;
        while(parent[i] != parent[parent[i]]) Union(i, parent[i]);
    }
    int mem[n+1];
    for(int i = 1; i <= n; i++) mem[i] = 1;
    for(int i = 1; i <= n; i++)
        mem[i] = Size[parent[i]];
    for(int i = 1; i <= n; i++)
    {
        cout << mem[i] << ' ';
    }
    cout << '\n';
    return 0;
}