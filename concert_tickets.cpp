/**
 * author: tranDuyAnh
**/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const int mod = 1e9 + 7;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  set<int> se;
  map<int,int> mp;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    mp[x]++;
    se.insert(x);
  }
  for(int i = 0; i < m; i++){
    int x;
    cin >> x;
    auto it = se.upper_bound(x);
    if(it != se.begin()){
      it--;
      int v = *it;
      cout << v << endl;
      mp[v]--;
      if(mp[v] == 0){
        se.erase(*it);
      }
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
