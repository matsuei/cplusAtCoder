int main() {
  int n;
  cin >> n;
  
  vector<int> a(0);
  int d = 0;
  for (int i = 0; i < n; ++i) {
    cin >> d;
    a.push_back(d);
  }
  vector<int> b(0);
  b.push_back(0);
  for (int i = 1; i < n + 1; ++i) {
    b.push_back(a[i - 1] + b[i - 1]);
  }
}
