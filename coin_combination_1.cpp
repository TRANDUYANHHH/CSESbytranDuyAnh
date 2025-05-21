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
  vector<int> c(n);
  for(int i = 0; i < n; i++){
    cin >> c[i];
  }
  vector<int> value(x + 1);
  value[0] = 1;
  for(int i = 1; i <= x; i++){
    for(int v : c){
      if(v <= i){
        value[i] = (value[i - v] + value[i]) % mod;
      }
    }
  }
  cout << value[x];
  return 0;
}
