// Q: https://codeforces.com/problemset/problem/1703/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            int b; cin >> b;
            string s; cin >> s;
            for(int j = b-1; j >= 0; j--)
            {
                if(s[j] == 'D')
                {
                    if(a[i] == 9) a[i] = 0;
                    else a[i] += 1;
                }
                else 
                {
                    if(a[i] == 0) a[i] = 9;
                    else a[i] -= 1;
                }
            }
        }
        for(int i = 0; i < n; i++)
            cout << a[i] <<" ";
        cout << "\n";
    }
    return 0;
}