// Q: https://codeforces.com/problemset/problem/1692/D
#include<bits/stdc++.h>
using namespace std;
int check(int h, int m)
{
    if(((h/10)%10 == m%10)&&(h%10 == (m/10)%10))
        return 1;
    else return 0;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int x; cin >> x;
        int hh, mm, h, m; 
        hh = (s[0]-'0')*10+(s[1]-'0'), mm = (s[3]-'0')*10+(s[4]-'0');
        h = x/60, m = x-h*60;
        int h_limit = hh, m_limit = mm;
        int cnt = 0;
        do
        {
            hh += h; mm += m;
            if(mm >= 60) hh += 1, mm -= 60;
            if(hh >= 24) hh -= 24;
            cnt += check(hh, mm);
        } while (hh != h_limit || mm != m_limit);
        cout << cnt <<"\n";
    }   
    return 0;
}