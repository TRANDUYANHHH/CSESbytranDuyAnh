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
  int n;
  cin >> n;
  vector<pair<int,int>> a;
  for(int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    a.emplace_back(x, 1);
    a.emplace_back(y, -1);
  } 
  sort(all(a));
  int mx = 0;
  int cnt = 0;
  for(auto [x, y] : a){
    cnt += y;
    mx = max(mx, cnt);
  }
  cout << mx;
  return 0;
}
