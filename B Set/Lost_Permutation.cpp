// Q: https://codeforces.com/problemset/problem/1759/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        bool visited[55] = {0};
        int m, s; cin >> m >> s;
        int mxm = -1;
        for(int i = 0; i < m; i++)
        {
            int x; cin >> x; visited[x] = 1;
            mxm = max(mxm, x);
        }
        for(int i = 1; i <= mxm; i++)
        {
            if(visited[i]) continue;
            s -= i;
        }
        bool f = 0;
        for(int i = mxm+1; i <= 100; i++)
        {
            if(s == 0)
            {
                f = 1; break;
            }
            if(s < 0) break;
            s -= i;
        }
        if(f) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}