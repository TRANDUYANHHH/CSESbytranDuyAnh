/**
 *  author: @tranDuyAnh
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for(int i = 0; i < int(n); i++)
#define FOR(i, a, b) for(int i = a, _b = b; i <= _b; i++)
#define FORD(i, a, b) for(int i = a, _b = b; i >= _b; i--)
const int maxn = 3e5 + 5, mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	sort(all(a));
	ll x = 0;
	REP(i, n){
		if(x + 1 < a[i]){
			cout << x + 1;
			return 0;
		}
		x = x + a[i];
	}
	cout << x + 1;
	return 0;
}

