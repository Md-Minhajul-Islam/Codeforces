// Q: https://codeforces.com/problemset/problem/433/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; 
    long long a[n+1], first[n+1], second[n+1];
    a[0] = first[0] = second[0] = 0; 
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        first[i] = first[i-1]+a[i];
    }
    sort(a, a+n+1);
    for(int i = 1; i <= n; i++)
        second[i] = second[i-1]+a[i];
    int m; cin >> m;
    while(m--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if(t == 1)
        {
            if(l == 1) cout << first[r];
            else cout << first[r]-first[l-1];
        }
        else
        {
            if(l == 1) cout << second[r];
            else cout << second[r]-second[l-1];
        }
        cout << "\n";
    }
    return 0;
}