#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n = 0;
  cin >> n;
  int d = 0;
  vector<int> a(0);
  for (int i = 0; i < n; ++i) {
    cin >> d;
    a.push_back(d);
  }
  vector<int> a(n), b(n), c(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  cout << s << endl;  // *
  cout << a << endl;  // 1
}
