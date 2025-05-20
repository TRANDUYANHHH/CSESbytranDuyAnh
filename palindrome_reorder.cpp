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
  string s;
  cin >> s;
  if(s.size() == 1){
    cout << s;
    return 0;
  }
  vector<int> a(26);
  for(char c : s){
    a[c - 'A']++;
  } 
  int cnt = 0;
  for(int i = 0; i < 26; i++){
    cnt += (a[i] % 2);
  } 
  if(cnt > 1){
    cout << "NO SOLUTION\n";
    return 0;
  }
  string f = "";
  for(int i = 0; i < 26; i++){
    if(a[i]) {
      for(int j = 0; j < a[i] / 2; j++){
        f.push_back(char(i + 'A'));
      }
    }
  }
  string t = "";
  for(int i = 0; i < 26; i++){
    if(a[i] % 2){
      t += char(i + 'A');
      break;
    }
  }
  string b = f;
  reverse(all(b));
  cout << f + t + b;
  return 0;
}
