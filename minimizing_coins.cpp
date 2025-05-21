/**
 * author: tranDuyAnh
**/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const int mod = 1e9 + 7;
const int inf = 1e9;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<int> value(x + 1);
  vector<int> coins(n);
  for(int &x : coins){
    cin >> x;
  }
  for(int i = 1; i <= x; i++){
    value[i] = inf;
    for(int coin : coins){
      if(coin <= i){
        value[i] = min(value[i], value[i - coin] + 1);
      }
    }
  }
  cout << (value[x] == inf ? -1 : value[x]);
  return 0;
}
