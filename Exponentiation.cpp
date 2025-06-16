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
ll pmod(int a, int n){
	if(n == 0){
		return 1;
	}
	ll x = pmod(a, n / 2);
	if(n % 2){
		return (x * x % mod) * a % mod;
	}
	return x * x % mod;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int a, n;
		cin >> a >> n;
		cout << pmod(a, n) << '\n';
	}
	return 0;
}

