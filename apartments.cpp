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
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n), b(m);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < m; i++){
    cin >> b[i];
  }
  sort(all(a));
  sort(all(b));
  int j = 0;
  int cnt = 0;
  for(int i = 0; i < n; i++){
    while(j < m && b[j] < a[i] - k) {
      j++;
    }
    if(j == m) break;
    if(abs(a[i] - b[j]) <= k){
      cnt++;
      j++;
    } 
  }
  cout << cnt;
  return 0;
}
