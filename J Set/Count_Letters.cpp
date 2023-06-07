// Q: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(26, 0);
    char c;
    while(cin >> c)
        v[c-'a']++;
    for(char i = 'a'; i <= 'z'; i++)
        if(v[i-'a']) 
            cout << i << " : " << v[i-'a'] << endl;
    return 0;
}