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
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  ll mn = 1e11;
  ll sum = accumulate(all(a), 0ll);
  for(int i = 0; i < (1 << n); i++){
    ll ts = 0;
    for(int j = 0; j < n; j++){
      if(i & (1 << j)){
        ts = ts + a[j];
      }
    }
    mn = min(mn, abs(ts - (sum - ts)));
  }
  cout << mn;
  return 0;
}
