// Q: https://codeforces.com/contest/1703/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[26] = {0};
        int balloons = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(arr[s[i]-'A'] == 0)
            {
                arr[s[i]-'A'] = 2;
                balloons += 2;
            }
            else balloons += 1;
        }
        cout << balloons << endl;
    }
    return 0;
}