// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size() == 1) cout << 0 <<"\n";
        int p = 0; 
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i-1] == s[i]) continue;
            if(s[i-1] == 'A' && s[i] == 'B')
            {
                if(i+1 == s.size())
                {
                    p += 1; continue;
                }
                else if(s[i+1] == 'A') continue;
                else
                {
                    p += 1;
                    s[i] = 'C';
                }
            }
            else
            {
                s[i] = 'B';
                p += 1;
            }
        }
        cout << p <<"\n";
    }
    return 0;
}