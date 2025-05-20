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
  map<string,bool> mp;
  string s = string(n, '0');
  mp[s] = true;
  while(true){
    cout << s << '\n';
    int i = n - 1;
    while(i >= 0){
      s[i] = (s[i] == '1' ? '0' : '1');
      if(mp.find(s) == mp.end()) {
        break;
      }
      s[i] = (s[i] == '1' ? '0' : '1');
      i--;
    }
    if(i < 0){
      break;
    }
    mp[s] = true;
  } 
  return 0;
}
