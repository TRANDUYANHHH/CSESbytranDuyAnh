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
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  } 
  sort(all(a));
  int l = 0;
  int cnt = 0;
  for(int i = n - 1; i >= 0 && i >= l; i--){
    if(l < i && a[i] + a[l] <= x){
      l++;
    }
    cnt++;
  }
  cout << cnt;
  return 0;
}
