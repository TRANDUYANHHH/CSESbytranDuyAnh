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
  int n, s;
  cin >> n >> s;
  vector<int> c(n);
  for(int i = 0; i < n; i++){
    cin >> c[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(s + 1));
  dp[0][0] = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 0; j <= s; j++){
      dp[i][j] = dp[i - 1][j];
      int left = j - c[i - 1];
      if(left >= 0){
        (dp[i][j] += dp[i][left]) %= mod;
      }
    }
  }
  cout << dp[n][s];
  return 0;
}
