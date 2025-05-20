/**
 * author: tranDuyAnh
**/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  if((1ll * n * (n + 1) / 2) % 2){
    cout << "NO";
    return 0;
  }
  cout << "YES\n";
  map<int,bool> mp;
  ll sum = 1ll * n * (n + 1) / 4;
  ll ts = 0;
  vector<int> a;
  for(int i = n; i >= 1; i--){
    if(ts + i < sum){
      ts = ts + i;
      a.push_back(i);
      mp[i] = true;
    } else {
      mp[sum - ts] = true;
      a.push_back(sum - ts);
      break;
    }
  }
  cout << a.size() << endl;
  for(auto x : a){
    cout << x << ' ';
  }
  cout << endl << n - a.size() << endl;
  for(int i = 1; i <= n; i++){
    if(mp.find(i) == mp.end()){
      cout << i << ' ';
    }
  }
  return 0;
}
