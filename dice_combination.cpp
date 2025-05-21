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
  vector<int> a(n + 1);
  a[0] = 1;
  for(int i = 1; i <= n; i++){
    for(int c : {1, 2, 3, 4, 5, 6}){
      if(c <= i){
        a[i] = (a[i] + a[i - c]) % mod;
      }
    }
  }
  cout << a[n];
  return 0;
}
