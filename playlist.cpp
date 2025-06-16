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
	REP(i, n){
		cin >> a[i];
	}
	set<int> se;
	int l = 0;
	int mx = 1;
	REP(i, n){
		 if(se.find(a[i]) != se.end()) {
			while(a[l] != a[i]){
				se.erase(se.find(a[l]));
				l++;
			}	
			l++;
		} else {
			se.insert(a[i]);
		}
		mx = max(mx, i - l + 1);
	}
	cout << mx;
	return 0;
}

