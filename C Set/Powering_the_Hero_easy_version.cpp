// Q: https://codeforces.com/problemset/problem/1800/C1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; long long arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        long long sum = 0;
        vector<long long> v;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                if(v.empty()) continue;
                sort(v.begin(), v.end());
                sum += v[v.size()-1];
                v.pop_back();
            }
            else v.push_back(arr[i]);
        }
        cout << sum <<'\n';
    }
    return 0;
}