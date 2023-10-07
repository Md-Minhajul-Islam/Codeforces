// Q: https://codeforces.com/problemset/problem/26/A
#include<bits/stdc++.h>
using namespace std;
bool mark[1550];
void seive()
{
    mark[0] = mark[1] = 1;
    for(int i = 2; i*i <= 1550; i++)
        if(!mark[i])
            for(int j = i*i; j <= 1550; j += i)
                mark[j] = 1;
}
int main()
{
    seive();
    int n; cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        int check = 0;
        for(int j = 2; j <= n/2+1; j++)
            if(!mark[j] && i%j == 0)
            {
                check++;
                if(check > 2) break;
            }
        if(check == 2) cnt++;
    }
    cout << cnt;
    return 0;
}