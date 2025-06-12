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

    priority_queue <int, vector<int>, greater<int> > A, B, C;
    for(int i = 0; i < n; i++)
    {
    	if(a[i] == 'a') A.push(i);
    	else if(a[i] == 'b') B.push(i);
    	else C.push(i);
    }


    for(int i = 0; i < n; i++)
    {
    	if(a[i] == b[i]){
    		if(a[i] == 'a') A.pop();
    		else if(a[i] == 'b') B.pop();
    		else C.pop();
    		continue;
    	}
    	if(b[i] == 'a')
    	{
    		no;
    		return;
    	}
    	if(b[i] == 'b')
    	{
    		if(!B.empty() && (C.empty() || B.top() < C.top()))
    		{
    			a[B.top()] = 'a';
    			A.push(B.top()); 
    			a[i] = 'b';
    			B.pop();
    			A.pop();
    		}
    		else{
    			no;
    			return;
    		}
    	}
    	else if(b[i] == 'c')
    	{
    		if(!C.empty() && (A.empty() || C.top() < A.top()))
    		{
    			a[C.top()] = 'b';
    			B.push(C.top());
    			a[i] = 'c';
    			C.pop();
    			B.pop();
    		}
    		else{
    			no;
    			return;
    		}
    	}
    	
    }
    yes;
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