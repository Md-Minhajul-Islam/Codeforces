// // Q: 
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef pair<int, int> pii;
// typedef vector<int> vii;
// typedef vector<ll> vll;
// typedef long double ld;
 
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair
 
// void solve()
// {
//     int n; cin >> n;
//     vector<bool> f(n+1, 0);
//     ll a[n+1]; for(int i = 1; i < n; i++) cin >> a[i];
//     ll tot = (n+1)*(n)/2;
//     if(a[n-1] > tot)
//     {
//         cout << "NO\n";
//         return;
//     }
//     a[n] = tot;
//     for(int i = 1; i < n; i++)
//     {
//         ll x = a[i+1]-a[i];
//         if(x > n) sum += x;
//         f[x] = 1;
//     }
//     vii v;
//     if(a[1] <= n && f[a[1]] == 0) f[a[1]] = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         if(f[i] == 0) v.pb(i);
//     }

// }
 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
 
//     int t; cin >> t;
//     while(t--)
//     {
//        solve();
//     }
//     return 0;
// }