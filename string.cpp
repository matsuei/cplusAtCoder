#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  
  string pre = s.substr(0, n);
  string post = s.substr(n);
  
  // 参照先の入れ替え
  swap(pre[a], pre[b])
  swap(pre, post)
  cout << pre << post << endl;
 
 // 1文字ずつ
 string str = "abcde";
  for (int i = 0; i < w; ++i) {
    for (int j = 0; j < h; ++j) {
      string ch = str.substr(j, 1);
        if (ch == "#") {
          data.at(i).at(j) = 1;
        } else {
          data.at(i).at(j) = 0;
        }
    }
  }
}
