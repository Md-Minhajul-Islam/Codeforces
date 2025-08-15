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
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    if(l1 == l2 && l2 == l3 && l1 == b1+b2+b3) yes;
    else if(l1 == l2+l3 && b2 == b3 && l1 == b1+b2) yes;
    else if(b1 == b2 && b2 == b3 && b1 == l1+l2+l3) yes;
    else if(b1 == b2+b3 && l2 == l3 && l1+l2 == b1) yes;
    else no;
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