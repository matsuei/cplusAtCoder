
cin >> N >> K;
rep(i, 0, N) cin >> A[i];
//　最初のintをキーに、2番目のintを管理
map<int, int> cnt;
rep(i, 0, N) cnt[A[i]]++;

// cntの全要素を回す
vector<int> count(0);
  for (auto p : cnt)
  {
    count.push_back(p.second);
  }
