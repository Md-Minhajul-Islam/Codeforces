// Q: https://codeforces.com/problemset/problem/1692/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        char c;
        scanf("%c", &c);
        char m[8][8];
        for(int i = 0; i < 8; i++)
            for(int j = 0; j < 8; j++)
                cin >> m[i][j];
        int row, col;
        for(int i = 1; i < 7; i++)
            for(int j = 1; j < 7; j++)
                if(m[i][j] == '#' && m[i-1][j+1] == '#' && m[i-1][j-1] == '#' && m[i+1][j-1] == '#' && m[i+1][j-1] == '#')
                {
                    row = i, col = j; break;
                }
        cout << row+1 << " " << col+1 <<"\n";
    }
    return 0;
}