#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int key;
  set<int> cut;
  
  // key以下の値を持つイテレータを取得
  decltype(cut)::iterator it = cut.lower_bound(key);
  if (it == cut.begin()) {
    // 先頭の要素
  } else if (it == cut.end()) {
    /// 該当の要素なし
  } else {
    // 先頭以外の要素
  }
  return 0;
}
