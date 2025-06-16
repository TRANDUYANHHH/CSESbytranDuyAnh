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
	int L, n;
	cin >> L >> n;
	set<int> p;
	p.insert(0);
	p.insert(L);
	multiset<int> se;
	se.insert(L);
	REP(i, n){
		int x;
		cin >> x;
		auto it = p.lower_bound(x);
		int b = *it;
		int f = *prev(it);
		p.insert(x);
		se.erase(se.find(b - f));
		se.insert(x - f);
		se.insert(b - x);
		cout << *prev(se.end()) << ' ';
	}
	return 0;
}

