
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
  string str;
  cin >> str;
  
  int k;
  cin >> k;
  
  vector<int> a(0);
  for (int i = 0; i < (int)str.length(); ++i) {
    a.push_back((int)(str[i] - '0'));
  }
  
  int count = stoi(str);
  for (int i = 0; i < k; i++) {
    string minString = "";
    sort(a.begin(), a.end());
    for (int j = 0; j < (int)a.size(); ++j) {
      minString = minString + to_string(a[j]);
    }
    int min = stoi(minString);
    
    string maxString = "";
    sort(a.begin(), a.end(), greater<int>{});
    for (int j = 0; j < (int)a.size(); ++j) {
      maxString = maxString + to_string(a[j]);
    }
    int max = stoi(maxString);
    count = max - min;
    string diff = to_string(count);
    vector<int> b(0);
    for (int j = 0; j < (int)diff.length(); ++j) {
      b.push_back((int)(diff[j] - '0'));
    }
    a = b;
  }
  cout << count << endl;
  
  vector<pair<int, int>> twiceArray;
}
