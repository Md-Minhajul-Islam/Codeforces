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
 
int cl;
void indexing(string s, int a[], int f)
{
    stack<int> st;
    int cnt = 0, len = s.size();
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '(') st.push(i);
        else if(!st.empty()) 
        {
            a[st.top()] = a[i] = cl;
            st.pop(); cnt++;
        }
    }
    if(cnt) cl++;
}
int check(string s)
{
    int prnt = 0, cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(') prnt++;
        else if(prnt)
        {
            prnt--;
            cnt += 2;
        }
    }
    return cnt;
}
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    string t; t = s; 
    reverse(t.begin(), t.end());
    int op2 = check(t);
    if(op2 == n) s = t;
    int a[n]; memset(a, 0, sizeof(a));
    cl = 1;
    indexing(s, a, 0);
    vector<pair<char, int>> v;
    for(int i = 0; i < n; i++) if(a[i] == 0) v.pb({s[i], i});
    reverse(v.begin(), v.end());
    stack<pair<char, int>> st;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].fi == '(') st.push(v[i]);
        else if(!st.empty())
        {
            a[st.top().se] = a[v[i].se] = cl;
            st.pop();
        }
    }
    unordered_set<int> us;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            cout << -1 << '\n';
            return;
        }
        us.insert(a[i]);
    }
    cout << us.size() << '\n';
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}