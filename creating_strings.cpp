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
  string s;
  cin >> s;
  sort(all(s));
  vector<string> res;
  do {
    res.push_back(s);
  } while(next_permutation(all(s)));
  cout << res.size() << '\n';
  for(auto x : res){
    cout << x << '\n';
  }
  return 0;
}
