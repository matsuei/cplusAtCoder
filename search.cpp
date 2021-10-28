
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];
  int q;
  cin >> q;
  vector<int> b(q);
  rep(i, 0, q) cin >> b[i];
  sort(a.begin(), a.end());

  vector<int> answer(q);
  for (int i = 0; i < q; i++) {
    vector<int>::iterator iter_lower;
    long idx_lower;
    // aの中からb[i]以上の位置を二分探索
    // aの中からb[i]より大きい位置を二分探索するときはupper_bound
    iter_lower = lower_bound(a.begin(), a.end(), b[i]);
    idx_lower = distance(a.begin(), iter_lower);
    int Diff1 = 2000000000, Diff2 = 2000000000;
    if (idx_lower < n)
      Diff1 = abs(b[i] - a[idx_lower]);
    if (idx_lower > 0)
      Diff2 = abs(b[i] - a[idx_lower - 1]);
    cout << min(Diff1, Diff2) << endl;
  }

  return 0;
  }
