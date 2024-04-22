// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair

pii ar[1000];
void precal()
{
    int a[6] = {4, 8, 15, 16, 23, 42};
    for(int i = 0; i < 6; i++)
        for(int j = i+1; j < 6; j++)
            ar[a[i]*a[j]] = {a[i], a[j]};
}
void solve()
{
    int a[7];
    int p, q, r, s;
    cout << "? 1 2" << endl; cin >> p;
    cout << "? 2 3" << endl; cin >> q;
    cout << "? 4 5" << endl; cin >> r;
    cout << "? 5 6" << endl; cin >> s;
    if(ar[p].fi == ar[q].fi)
        a[1] = ar[p].se, a[2] = ar[p].fi, a[3] = ar[q].se;
    else if(ar[p].fi == ar[q].se)
        a[1] = ar[p].se, a[2] = ar[p].fi, a[3] = ar[q].fi;
    else if(ar[p].se == ar[q].fi)
        a[1] = ar[p].fi, a[2] = ar[p].se, a[3] = ar[q].se;
    else if(ar[p].se == ar[q].se)
        a[1] = ar[p].fi, a[2] = ar[p].se, a[3] = ar[q].fi;

    if(ar[r].fi == ar[s].fi)
        a[4] = ar[r].se, a[5] = ar[r].fi, a[6] = ar[s].se;
    else if(ar[r].fi == ar[s].se)
        a[4] = ar[r].se, a[5] = ar[r].fi, a[6] = ar[s].fi;
    else if(ar[r].se == ar[s].fi)
        a[4] = ar[r].fi, a[5] = ar[r].se, a[6] = ar[s].se;
    else if(ar[r].se == ar[s].se)
        a[4] = ar[r].fi, a[5] = ar[r].se, a[6] = ar[s].fi;

    cout << "!";
    for(int i = 1; i <= 6; i++)
        cout << ' ' << a[i];
    cout << endl;
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    precal();
    solve();
    return 0;
}