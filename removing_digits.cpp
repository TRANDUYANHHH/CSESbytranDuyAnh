/**
 * author: tranDuyAnh
**/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int value[maxn];
int ready[maxn];

int solve(int n){
  if(n < 10){
    return 1;
  }
  if(!ready[n]){
    int t = n;
    int mx = 0;
    while(t){
      mx = max(mx, t % 10);
      t /= 10;
    }
    value[n] = solve(n - mx) + 1;
    ready[n] = true;
  }
  return value[n];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  cout << solve(n);
  return 0;
}
