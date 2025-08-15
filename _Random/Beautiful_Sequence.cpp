// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<int> vii;
// typedef vector<ll> vll;
// typedef long double ld;

// #define fi first
// #define se second
// #define pb push_back
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(ld t) {cerr << t;}
// void _print(double t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// int test_case;

// const ll mod = 998244353ll;

// ll fun(ll n)
// {
// 	ll m = 1;
// 	for(ll i = 1; i <= n; i++) m = (m*2ll)%mod;
// 	return m-1;
// }

// void solve()
// {
//     int n; cin >> n;
//     vii a(n+2); 
//     for(int i = 1; i <= n; i++) cin >> a[i];
//     vll cnt_one(n+2, 0), cnt_three(n+2, 0);
// 	for(int i = 1; i <= n; i++)
// 	{
// 		cnt_one[i] = cnt_one[i-1];
// 		cnt_three[i] = cnt_three[i-1];

// 		cnt_one[i] += (a[i] == 1);
// 		cnt_three[i] += (a[i] == 3);
// 	}
	
// 	ll ans = 0;
//     int i = 1;
// 	while(i <= n)
// 	{
// 		if(a[i] == 2)
// 		{
// 			int l = i-1, r;
// 			ll cnt = 0;
// 			while(i <= n && a[i] == 2) i++, cnt++;
// 			//cout << cnt << "\n";
// 			r = i;
// 			// if(cnt)
// 			// {
// 			// 	// cout << l << " " << r << "\n";
// 			// 	cout << cnt_one[l] << " " << cnt_three[n]-cnt_three[r-1] << "\n";
// 			// }
// 			ans += ((cnt_one[l]*(cnt_three[n]-cnt_three[r-1]))%mod*fun(cnt))%mod;
// 			ans %= mod;
// 		}
// 		else i++;
// 	}
// 	cout << ans << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("Error.txt", "w", stderr);
//     #endif

//     int t_case; cin >> t_case;
//     for(test_case = 1; test_case <= t_case; test_case++)
//     {
//         solve();
//     }
//     return 0;
// }