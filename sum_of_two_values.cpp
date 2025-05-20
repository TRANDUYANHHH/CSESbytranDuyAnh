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
  int n, x;
  cin >> n >> x;
  vector<pair<int,int>> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(all(a));
  for(int i = 0; i < n; i++){
    pair<int,int> tmp = {x - a[i].first, -1};
    auto it = lower_bound(a.begin() + i + 1, a.end(), tmp) - a.begin();
    if(it != n && a[it].first == x - a[i].first){
      cout << a[i].second + 1 << ' ' << a[it].second + 1 << '\n';
      return 0;
    }
  }
  cout << "IMPOSSIBLE\n";
  return 0;
}
