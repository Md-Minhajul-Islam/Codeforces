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
    vii a(n), b(n);
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;

    vector<pii> ans;
	int cnt = n, target1 = 1, target2 = n+1, startInd = 0;
	while(cnt--)
	{
		bool found1 = 0, found2 = 0;

		for(int i = startInd; i < n; i++){
			if(a[i] == target1){
				if(i-startInd > 0){
					for(int j = i-1; j >= startInd; j--) ans.pb({1, j}), swap(a[j], a[j+1]);
				}
				found1 = 1;
				break;
			}
		}
		if(found1 == 0){
			for(int i = startInd; i < n; i++){
				if(b[i] == target1){
					if(i-startInd > 0){
						for(int j = i-1; j >= startInd; j--) ans.pb({2, j}), swap(b[j], b[j+1]);
					}
					swap(a[startInd], b[startInd]);
					ans.pb({3, startInd});
					break;
				}
			}
		}

		for(int i = startInd; i < n; i++){
			if(b[i] == target2){
				if(i-startInd > 0){
					for(int j = i-1; j >= startInd; j--) ans.pb({2, j}), swap(b[j], b[j+1]);
				}
				found2 = 1;
				break;
			}
		}
		if(found2 == 0){
			for(int i = startInd+1; i < n; i++){
				if(a[i] == target2){
					if(i-startInd-1 > 0){
						for(int j = i-1; j >= startInd+1; j--) ans.pb({1, j}), swap(a[j], a[j+1]);
					}
					swap(a[startInd+1], b[startInd+1]);
					ans.pb({3, startInd+1});
					swap(b[startInd], b[startInd+1]);
					ans.pb({2, startInd});
					break;
				}
			}
		}
		target1++; target2++;
		startInd++;
	}

	// for(int i = 0; i < n; i++) cout << a[i] <<" ";
	// 	cout <<"\n";
	// for(int i = 0; i < n; i++) cout << b[i] << " ";
	// 	cout << "\n";
	
	cout << ans.size() << "\n";
	for(auto &x: ans){
		cout << x.fi <<" " << x.se+1 << "\n";
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