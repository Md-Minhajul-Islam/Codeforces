// Q: https://codeforces.com/problemset/problem/1722/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long total = 0;
        vector<int> ifTurn;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                total += n-1-i;
                if(i-(n-1-i) > 0)
                    ifTurn.push_back(i-(n-1-i));
            }
            else
            {
                total += i;
                if((n-1-i)-i > 0)
                    ifTurn.push_back((n-1-i)-i);
            }
        }	
        int j = ifTurn.size()-1;
        sort(ifTurn.begin(), ifTurn.end());
        for (int i = 1; i <= n; i++)
        {
            if(j >= 0)
            {
                total += ifTurn[j];
                j--;
            }
            cout << total << " ";
        }
        cout << "\n";
    }
    return 0;
}