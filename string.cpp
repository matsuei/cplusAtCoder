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
  for (int i = 0; i < str.size(); ++i) {
    s.at(i);
  }
 
 // 辞書順列挙
 string str;
 sort(str.begin(), str.end());
 do {
  cout << str << endl;
 } while(next_permutation(str.begin(), str.end()));
}
