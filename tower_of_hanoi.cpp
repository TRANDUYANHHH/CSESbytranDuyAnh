/**
 * author: tranDuyAnh
**/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const int mod = 1e9 + 7;
vector<pair<int,int>> res;

void solve(int n, int a, int b){
  if(n == 1){
    res.emplace_back(a, b);
    return;
  }
  solve(n - 1, a, 6 - a - b);
  solve(1, a, b);
  solve(n - 1, 6 - a - b, b);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  solve(n, 1, 3);
  cout << res.size() << endl;
  for(auto [x, y] : res){
    cout << x << ' ' << y << endl;
  }
  return 0;
}
