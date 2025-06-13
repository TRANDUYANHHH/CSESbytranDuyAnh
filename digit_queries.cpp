/**
 *  author: @tranDuyAnh
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for(int i = 0; i < int(n); i++)
#define FOR(i, a, b) for(int i = int(a); i < int(b); i++)
#define FORD(i, a, b) for(int i = int(b) - 1; i >= int(a); i--)
const int maxn = 3e5 + 5, mod = 1e9 + 7;

ll cal(ll x){
	int sz = to_string(x).size();
	ll ans = 0;
	FOR(i, 1, sz){
		ll y = pow(10, i - 1);
		ans = ans + 9 * y * i; 	
	}
	ans += (x - (ll)pow(10, sz - 1) + 1) * sz;
	return ans;
}

void solve(){
	ll k;
	cin >> k;
	ll l = 1, r = int64_t(1e18);
	while(l <= r){
		ll m = (l + r) / 2;
		ll x = cal(m);
		if(x >= k){
			string t = to_string(m);
			int sz = t.size();
			REP(i, sz){
				if(x - sz + i + 1 == k){
					cout << t[i];
					return;
				}
			}
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int q = 1;
	cin >> q;
	while(q--){
		solve(); cout << '\n';
	}
	return 0;
}

