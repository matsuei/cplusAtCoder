#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<int> digits;
  while (n) {
    digits.push_back(n % 10);
    n /= 10;
  }
}


