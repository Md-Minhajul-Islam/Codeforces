#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"


int test_case;


void solve()
{
    int n; cin >> n;
    string a, b; cin >> a >> b;
 
    bool fullEqual = 0;
    bool fullUnEqual = 1;

    if(a==b) fullEqual = 1;

    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i]) fullUnEqual = 0;
    }

    if(!fullEqual and !fullUnEqual)
    {
        cout<<"NO\n";
        return;
    }

    vector<pair<int,int>> ans;

    for(int i=1; i<n ;i++)
    {
        if(b[i]!=b[i-1])
        {
            ans.push_back({0,i-1});
            swap(fullEqual,fullUnEqual);
        }
    }

    if(b[0]=='1')
    {
        ans.push_back({0,0});
        ans.push_back({1,n-1});
    }

    if(fullUnEqual)
    {
        ans.push_back({0,n-1});
    }
    cout << "YES\n";
    cout << ans.size() << "\n";
    for(auto i:ans)
    {
        cout<<(i.fi+1)<<" "<<(i.se+1)<< "\n";
    }
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}